#!/bin/bash
# SPDX-FileCopyrightText: Copyright (C) 2025 Bruce Ashfield
#
# SPDX-License-Identifier: MIT
#
# build-vcontainer-sdk.sh
# ===========================================================================
# Build the vcontainer standalone SDK (vdkr + vpdmn + vxn, x86_64 + aarch64)
# in an ISOLATED build dir, so the SDK-based tests (test_vdkr.py, test_vpdmn.py,
# and the vxn dom0 tests) run against a known, reproducible SDK that does NOT
# depend on -- or perturb -- your dev local.conf.
#
# It reuses the CURRENT config's layer stack (copies bblayers.conf) and inherits
# cache/mirror/hashserv settings from your existing build's local.conf (no
# hardcoded paths), but writes its own minimal local.conf assembled from the
# composable vcontainer-sdk-*.conf profiles -- so container package selection is
# deterministic regardless of what your dev local.conf carries.
#
# Usage:
#   tests/build-vcontainer-sdk.sh
#
# Env overrides (all optional):
#   POKY_DIR         poky root                (default: derived from this script)
#   DEV_BUILD        existing build dir to copy layers + cache config from
#                                             (default: $BUILD_DIR or $POKY_DIR/build)
#   SDK_BUILD_DIR    isolated build dir        (default: $POKY_DIR/build-vcontainer-sdk)
#   SDK_EXTRACT_DIR  where to extract the SDK  (default: /tmp/vcontainer)
#
# On success it prints the --vdkr-dir path to hand to pytest.

set -eu

here="$(cd "$(dirname "$0")" && pwd)"                       # .../meta-virtualization/tests
POKY_DIR="${POKY_DIR:-$(cd "$here/../.." && pwd)}"          # poky root
DEV_BUILD="${DEV_BUILD:-${BUILD_DIR:-$POKY_DIR/build}}"
SDK_BUILD_DIR="${SDK_BUILD_DIR:-$POKY_DIR/build-vcontainer-sdk}"
SDK_EXTRACT_DIR="${SDK_EXTRACT_DIR:-/tmp/vcontainer}"

[ -f "$POKY_DIR/oe-init-build-env" ] || { echo "ERROR: no oe-init-build-env under POKY_DIR=$POKY_DIR" >&2; exit 1; }
[ -f "$DEV_BUILD/conf/bblayers.conf" ] || { echo "ERROR: no bblayers.conf in DEV_BUILD=$DEV_BUILD (set DEV_BUILD)" >&2; exit 1; }
[ -f "$DEV_BUILD/conf/local.conf" ]    || { echo "ERROR: no local.conf in DEV_BUILD=$DEV_BUILD (set DEV_BUILD)" >&2; exit 1; }

echo "poky:        $POKY_DIR"
echo "dev build:   $DEV_BUILD (layers + cache config source)"
echo "sdk build:   $SDK_BUILD_DIR (isolated)"
echo "extract to:  $SDK_EXTRACT_DIR"

# oe-init-build-env creates/enters the isolated build dir (does not touch DEV_BUILD)
# shellcheck disable=SC1090
source "$POKY_DIR/oe-init-build-env" "$SDK_BUILD_DIR" >/dev/null

# Reuse the current layer stack verbatim -- "build against the current config".
cp "$DEV_BUILD/conf/bblayers.conf" conf/bblayers.conf

# Minimal, deterministic local.conf:
#   - inherit ONLY cache/mirror/hashserv/parallelism from the dev local.conf
#     (verbatim, so machine-specific paths like DL_DIR/SSTATE_DIR aren't hardcoded
#     here -- they come from whatever that build uses)
#   - the SDK profile stack owns container/arch/multiconfig selection
{
    echo 'MACHINE ?= "qemux86-64"'
    echo 'CONF_VERSION = "2"'
    echo ''
    echo '# --- inherited from the dev build local.conf (caches/mirrors/hashserv/perf) ---'
    grep -E '^[[:space:]]*(DL_DIR|SSTATE_DIR|SSTATE_MIRRORS|SOURCE_MIRROR_URL|PREMIRRORS|BB_HASHSERVE|BB_HASHSERVE_UPSTREAM|BB_SIGNATURE_HANDLER|BB_NUMBER_THREADS|PARALLEL_MAKE)[[:space:]]*[?:+.]?=' \
        "$DEV_BUILD/conf/local.conf" || true
    echo ''
    echo '# --- vcontainer SDK: everything (vdkr + vpdmn + vxn, x86_64 + aarch64) ---'
    echo 'require conf/distro/include/meta-virt-host.conf'
    echo 'require conf/distro/include/vcontainer-sdk-x86-64.conf'
    echo 'require conf/distro/include/vcontainer-sdk-vdkr-x86-64.conf'
    echo 'require conf/distro/include/vcontainer-sdk-vpdmn-x86-64.conf'
    echo 'require conf/distro/include/vcontainer-sdk-vxn-x86-64.conf'
    echo 'require conf/distro/include/vcontainer-sdk-aarch64.conf'
} > conf/local.conf

echo "=== isolated local.conf ==="
cat conf/local.conf
echo "==========================="

bitbake vcontainer-tarball

installer="$(ls -t tmp/deploy/sdk/vcontainer-standalone.sh 2>/dev/null | head -1)"
[ -n "$installer" ] || { echo "ERROR: no SDK installer produced under $SDK_BUILD_DIR/tmp/deploy/sdk" >&2; exit 1; }

rm -rf "$SDK_EXTRACT_DIR"
"$installer" -d "$SDK_EXTRACT_DIR" -y

echo
echo "SDK built + extracted to: $SDK_EXTRACT_DIR"
echo "Run the SDK-based tests with:"
echo "  pytest tests/test_vdkr.py tests/test_vpdmn.py -v --vdkr-dir $SDK_EXTRACT_DIR"
