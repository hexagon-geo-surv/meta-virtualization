SUMMARY = "Ultimate executable compressor."
HOMEPAGE = "https://upx.github.io/"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://LICENSE;md5=353753597aa110e0ded3508408c6374a"
SRCREV_upx = "03c4184067d8f6cf7a9f7bffd3b92d0035f64eda"
PV = "4.2.4+git${SRCPV}"

# Note: DO NOT use released tarball in favor of the git repository with submodules.
# it makes maintenance easier for CVEs or other issues.
SRC_URI = "gitsm://github.com/upx/upx;protocol=https;;name=upx;branch=devel"

S = "${WORKDIR}/git"

inherit pkgconfig cmake

BBCLASSEXTEND = "native"
