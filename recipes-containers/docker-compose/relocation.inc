export sites = "k8s.io/api:k8s.io/api:force \
           k8s.io/utils:k8s.io/utils:force \
           k8s.io/klog/v2:k8s.io/klog/v2:force \
           gotest.tools/v3:gotest.tools/v3:force \
           dario.cat/mergo:dario.cat/mergo:force \
           gopkg.in/inf.v0:gopkg.in/inf.v0:force \
           go.uber.org/mock:go.uber.org/mock:force \
           golang.org/x/exp:golang.org/x/exp:force \
           golang.org/x/sys:golang.org/x/sys:force \
           gopkg.in/yaml.v3:gopkg.in/yaml.v3:force \
           golang.org/x/net:golang.org/x/net:force \
           gopkg.in/yaml.v2:gopkg.in/yaml.v2:force \
           k8s.io/client-go:k8s.io/client-go:force \
           sigs.k8s.io/json:sigs.k8s.io/json:force \
           sigs.k8s.io/yaml:sigs.k8s.io/yaml:force \
           golang.org/x/sync:golang.org/x/sync:force \
           golang.org/x/term:golang.org/x/term:force \
           golang.org/x/text:golang.org/x/text:force \
           golang.org/x/time:golang.org/x/time:force \
           go.uber.org/goleak:go.uber.org/goleak:force \
           golang.org/x/crypto:golang.org/x/crypto:force \
           golang.org/x/oauth2:golang.org/x/oauth2:force \
           k8s.io/apimachinery:k8s.io/apimachinery:force \
           k8s.io/kube-openapi:k8s.io/kube-openapi:force \
           github.com/moby/term:github.com/moby/term:force \
           github.com/docker/go:github.com/docker/go:force \
           github.com/docker/cli:github.com/docker/cli:force \
           github.com/r3labs/sse:github.com/r3labs/sse:force \
           github.com/mgutz/ansi:github.com/mgutz/ansi:force \
           github.com/pkg/errors:github.com/pkg/errors:force \
           github.com/spf13/cobra:github.com/spf13/cobra:force \
           github.com/spf13/pflag:github.com/spf13/pflag:force \
           google.golang.org/grpc:google.golang.org/grpc:force \
           github.com/gofrs/flock:github.com/gofrs/flock:force \
           github.com/google/uuid:github.com/google/uuid:force \
           github.com/gorilla/mux:github.com/gorilla/mux:force \
           github.com/moby/locker:github.com/moby/locker:force \
           github.com/rivo/uniseg:github.com/rivo/uniseg:force \
           github.com/buger/goterm:github.com/buger/goterm:force \
           github.com/morikuni/aec:github.com/morikuni/aec:force \
           github.com/otiai10/copy:github.com/otiai10/copy:force \
           github.com/beorn7/perks:github.com/beorn7/perks:force \
           github.com/go-logr/logr:github.com/go-logr/logr:force \
           github.com/go-logr/stdr:github.com/go-logr/stdr:force \
           github.com/google/shlex:github.com/google/shlex:force \
           github.com/miekg/pkcs11:github.com/miekg/pkcs11:force \
           github.com/otiai10/mint:github.com/otiai10/mint:force \
           github.com/x448/float16:github.com/x448/float16:force \
           github.com/docker/buildx:github.com/docker/buildx:force \
           github.com/docker/docker:github.com/docker/docker:force \
           github.com/google/go-cmp:github.com/google/go-cmp:force \
           github.com/moby/buildkit:github.com/moby/buildkit:force \
           go.opentelemetry.io/otel:go.opentelemetry.io/otel:force \
           github.com/aws/smithy-go:github.com/aws/smithy-go:force \
           github.com/gogo/protobuf:github.com/gogo/protobuf:force \
           github.com/google/gofuzz:github.com/google/gofuzz:force \
           github.com/imdario/mergo:github.com/imdario/mergo:force \
           github.com/containerd/log:github.com/containerd/log:force \
           github.com/zclconf/go-cty:github.com/zclconf/go-cty:force \
           github.com/davecgh/go-spew:github.com/davecgh/go-spew:force \
           github.com/docker/go-units:github.com/docker/go-units:force \
           github.com/mitchellh/go-ps:github.com/mitchellh/go-ps:force \
           github.com/sirupsen/logrus:github.com/sirupsen/logrus:force \
           github.com/go-openapi/swag:github.com/go-openapi/swag:force \
           github.com/golang/protobuf:github.com/golang/protobuf:force \
           github.com/mailru/easyjson:github.com/mailru/easyjson:force \
           github.com/mattn/go-isatty:github.com/mattn/go-isatty:force \
           github.com/moby/spdystream:github.com/moby/spdystream:force \
           github.com/mxk/go-flowrate:github.com/mxk/go-flowrate:force \
           google.golang.org/protobuf:google.golang.org/protobuf:force \
           github.com/moby/sys/user:github.com/moby/sys/user/user:force \
           github.com/stretchr/testify:github.com/stretchr/testify:force \
           github.com/containerd/ttrpc:github.com/containerd/ttrpc:force \
           github.com/josharian/intern:github.com/josharian/intern:force \
           github.com/json-iterator/go:github.com/json-iterator/go:force \
           github.com/serialx/hashring:github.com/serialx/hashring:force \
           github.com/tonistiigi/units:github.com/tonistiigi/units:force \
           github.com/tonistiigi/vt100:github.com/tonistiigi/vt100:force \
           github.com/eiannone/keyboard:github.com/eiannone/keyboard:force \
           github.com/fsnotify/fsevents:github.com/fsnotify/fsevents:force \
           github.com/tilt-dev/fsnotify:github.com/tilt-dev/fsnotify:force \
           github.com/Azure/go-ansiterm:github.com/Azure/go-ansiterm:force \
           github.com/aws/aws-sdk-go-v2:github.com/aws/aws-sdk-go-v2:force \
           github.com/cespare/xxhash/v2:github.com/cespare/xxhash/v2:force \
           github.com/docker/go-metrics:github.com/docker/go-metrics:force \
           github.com/felixge/httpsnoop:github.com/felixge/httpsnoop:force \
           github.com/fxamacker/cbor/v2:github.com/fxamacker/cbor/v2:force \
           github.com/gorilla/websocket:github.com/gorilla/websocket:force \
           github.com/hashicorp/errwrap:github.com/hashicorp/errwrap:force \
           github.com/munnerz/goautoneg:github.com/munnerz/goautoneg:force \
           github.com/pelletier/go-toml:github.com/pelletier/go-toml:force \
           github.com/prometheus/common:github.com/prometheus/common:force \
           github.com/prometheus/procfs:github.com/prometheus/procfs:force \
           github.com/tonistiigi/fsutil:github.com/tonistiigi/fsutil:force \
           gopkg.in/cenkalti/backoff.v1:gopkg.in/cenkalti/backoff.v1:force \
           github.com/Microsoft/go-winio:github.com/Microsoft/go-winio:force \
           github.com/acarl005/stripansi:github.com/acarl005/stripansi:force \
           github.com/containerd/console:github.com/containerd/console:force \
           github.com/containerd/errdefs:github.com/containerd/errdefs:force \
           github.com/fvbommel/sortorder:github.com/fvbommel/sortorder:force \
           github.com/klauspost/compress:github.com/klauspost/compress:force \
           github.com/mattn/go-colorable:github.com/mattn/go-colorable:force \
           github.com/mattn/go-runewidth:github.com/mattn/go-runewidth:force \
           github.com/modern-go/reflect2:github.com/modern-go/reflect2:force \
           github.com/pmezard/go-difflib:github.com/pmezard/go-difflib:force \
           github.com/moby/sys/signal:github.com/moby/sys/signal/signal:force \
           github.com/moby/sys/userns:github.com/moby/sys/userns/userns:force \
           github.com/jonboulle/clockwork:github.com/jonboulle/clockwork:force \
           github.com/mattn/go-shellwords:github.com/mattn/go-shellwords:force \
           github.com/moby/patternmatcher:github.com/moby/patternmatcher:force \
           go.opentelemetry.io/otel/sdk:go.opentelemetry.io/otel/sdk/sdk:force \
           github.com/cenkalti/backoff/v4:github.com/cenkalti/backoff/v4:force \
           github.com/docker/distribution:github.com/docker/distribution:force \
           github.com/shibumi/go-pathspec:github.com/shibumi/go-pathspec:force \
           github.com/containerd/platforms:github.com/containerd/platforms:force \
           github.com/docker/cli-docs-tool:github.com/docker/cli-docs-tool:force \
           github.com/hashicorp/go-version:github.com/hashicorp/go-version:force \
           github.com/moby/sys/symlink:github.com/moby/sys/symlink/symlink:force \
           github.com/modern-go/concurrent:github.com/modern-go/concurrent:force \
           github.com/xeipuuv/gojsonschema:github.com/xeipuuv/gojsonschema:force \
           github.com/AlecAivazis/survey/v2:github.com/AlecAivazis/survey/v2:force \
           github.com/docker/go-connections:github.com/docker/go-connections:force \
           github.com/Masterminds/semver/v3:github.com/Masterminds/semver/v3:force \
           github.com/containerd/continuity:github.com/containerd/continuity:force \
           github.com/containerd/typeurl/v2:github.com/containerd/typeurl/v2:force \
           github.com/cpuguy83/go-md2man/v2:github.com/cpuguy83/go-md2man/v2:force \
           github.com/google/gnostic-models:github.com/google/gnostic-models:force \
           github.com/xeipuuv/gojsonpointer:github.com/xeipuuv/gojsonpointer:force \
           go.opentelemetry.io/proto/otlp:go.opentelemetry.io/proto/otlp/otlp:force \
           github.com/distribution/reference:github.com/distribution/reference:force \
           github.com/mitchellh/mapstructure:github.com/mitchellh/mapstructure:force \
           github.com/skratchdot/open-golang:github.com/skratchdot/open-golang:force \
           go.opentelemetry.io/otel/trace:go.opentelemetry.io/otel/trace/trace:force \
           github.com/emicklei/go-restful/v3:github.com/emicklei/go-restful/v3:force \
           github.com/go-openapi/jsonpointer:github.com/go-openapi/jsonpointer:force \
           github.com/hashicorp/go-cleanhttp:github.com/hashicorp/go-cleanhttp:force \
           github.com/in-toto/in-toto-golang:github.com/in-toto/in-toto-golang:force \
           github.com/kballard/go-shellquote:github.com/kballard/go-shellquote:force \
           github.com/moby/docker-image-spec:github.com/moby/docker-image-spec:force \
           github.com/planetscale/vtprotobuf:github.com/planetscale/vtprotobuf:force \
           github.com/tonistiigi/go-csvvalue:github.com/tonistiigi/go-csvvalue:force \
           github.com/hashicorp/go-multierror:github.com/hashicorp/go-multierror:force \
           github.com/moby/sys/mountinfo:github.com/moby/sys/mountinfo/mountinfo:force \
           github.com/prometheus/client_model:github.com/prometheus/client_model:force \
           github.com/russross/blackfriday/v2:github.com/russross/blackfriday/v2:force \
           github.com/tonistiigi/dchapes-mode:github.com/tonistiigi/dchapes-mode:force \
           github.com/xeipuuv/gojsonreference:github.com/xeipuuv/gojsonreference:force \
           github.com/xhit/go-str2duration/v2:github.com/xhit/go-str2duration/v2:force \
           go.opentelemetry.io/otel/metric:go.opentelemetry.io/otel/metric/metric:force \
           github.com/containerd/containerd/v2:github.com/containerd/containerd/v2:force \
           github.com/opencontainers/go-digest:github.com/opencontainers/go-digest:force \
           github.com/containerd/errdefs/pkg:github.com/containerd/errdefs/pkg/pkg:force \
           github.com/go-openapi/jsonreference:github.com/go-openapi/jsonreference:force \
           github.com/go-viper/mapstructure/v2:github.com/go-viper/mapstructure/v2:force \
           github.com/prometheus/client_golang:github.com/prometheus/client_golang:force \
           github.com/moby/sys/capability:github.com/moby/sys/capability/capability:force \
           github.com/moby/sys/sequential:github.com/moby/sys/sequential/sequential:force \
           github.com/opencontainers/image-spec:github.com/opencontainers/image-spec:force \
           github.com/theupdateframework/notary:github.com/theupdateframework/notary:force \
           github.com/AdaLogics/go-fuzz-headers:github.com/AdaLogics/go-fuzz-headers:force \
           github.com/inconshreveable/mousetrap:github.com/inconshreveable/mousetrap:force \
           sigs.k8s.io/structured-merge-diff/v4:sigs.k8s.io/structured-merge-diff/v4:force \
           github.com/compose-spec/compose-go/v2:github.com/compose-spec/compose-go/v2:force \
           github.com/mitchellh/hashstructure/v2:github.com/mitchellh/hashstructure/v2:force \
           github.com/containerd/containerd/api:github.com/containerd/containerd/api/api:force \
           github.com/aws/aws-sdk-go-v2/config:github.com/aws/aws-sdk-go-v2/config/config:force \
           tags.cncf.io/container-device-interface:tags.cncf.io/container-device-interface:force \
           github.com/apparentlymart/go-textseg/v15:github.com/apparentlymart/go-textseg/v15:force \
           go.opentelemetry.io/otel/sdk/metric:go.opentelemetry.io/otel/sdk/metric/sdk/metric:force \
           github.com/grpc-ecosystem/grpc-gateway/v2:github.com/grpc-ecosystem/grpc-gateway/v2:force \
           github.com/docker/docker-credential-helpers:github.com/docker/docker-credential-helpers:force \
           github.com/aws/aws-sdk-go-v2/credentials:github.com/aws/aws-sdk-go-v2/credentials/credentials:force \
           github.com/aws/aws-sdk-go-v2/service/sso:github.com/aws/aws-sdk-go-v2/service/sso/service/sso:force \
           github.com/aws/aws-sdk-go-v2/service/sts:github.com/aws/aws-sdk-go-v2/service/sts/service/sts:force \
           github.com/aws/aws-sdk-go-v2/internal/ini:github.com/aws/aws-sdk-go-v2/internal/ini/internal/ini:force \
           google.golang.org/genproto/googleapis/api:google.golang.org/genproto/googleapis/api/googleapis/api:force \
           google.golang.org/genproto/googleapis/rpc:google.golang.org/genproto/googleapis/rpc/googleapis/rpc:force \
           github.com/secure-systems-lab/go-securesystemslib:github.com/secure-systems-lab/go-securesystemslib:force \
           github.com/aws/aws-sdk-go-v2/service/ssooidc:github.com/aws/aws-sdk-go-v2/service/ssooidc/service/ssooidc:force \
           github.com/aws/aws-sdk-go-v2/feature/ec2/imds:github.com/aws/aws-sdk-go-v2/feature/ec2/imds/feature/ec2/imds:force \
           github.com/aws/aws-sdk-go-v2/internal/endpoints/v2:github.com/aws/aws-sdk-go-v2/internal/endpoints/v2/internal/endpoints/v2:force \
           go.opentelemetry.io/otel/exporters/otlp/otlptrace:go.opentelemetry.io/otel/exporters/otlp/otlptrace/exporters/otlp/otlptrace:force \
           github.com/aws/aws-sdk-go-v2/internal/configsources:github.com/aws/aws-sdk-go-v2/internal/configsources/internal/configsources:force \
           github.com/aws/aws-sdk-go-v2/service/internal/presigned-url:github.com/aws/aws-sdk-go-v2/service/internal/presigned-url/service/internal/presigned-url:force \
           github.com/aws/aws-sdk-go-v2/service/internal/accept-encoding:github.com/aws/aws-sdk-go-v2/service/internal/accept-encoding/service/internal/accept-encoding:force \
           go.opentelemetry.io/contrib/instrumentation/net/http/otelhttp:go.opentelemetry.io/contrib/instrumentation/net/http/otelhttp/instrumentation/net/http/otelhttp:force \
           go.opentelemetry.io/otel/exporters/otlp/otlptrace/otlptracegrpc:go.opentelemetry.io/otel/exporters/otlp/otlptrace/otlptracegrpc/exporters/otlp/otlptrace/otlptracegrpc:force \
           go.opentelemetry.io/otel/exporters/otlp/otlptrace/otlptracehttp:go.opentelemetry.io/otel/exporters/otlp/otlptrace/otlptracehttp/exporters/otlp/otlptrace/otlptracehttp:force \
           go.opentelemetry.io/otel/exporters/otlp/otlpmetric/otlpmetricgrpc:go.opentelemetry.io/otel/exporters/otlp/otlpmetric/otlpmetricgrpc/exporters/otlp/otlpmetric/otlpmetricgrpc:force \
           go.opentelemetry.io/otel/exporters/otlp/otlpmetric/otlpmetrichttp:go.opentelemetry.io/otel/exporters/otlp/otlpmetric/otlpmetrichttp/exporters/otlp/otlpmetric/otlpmetrichttp:force \
           go.opentelemetry.io/contrib/instrumentation/google.golang.org/grpc/otelgrpc:go.opentelemetry.io/contrib/instrumentation/google.golang.org/grpc/otelgrpc/instrumentation/google.golang.org/grpc/otelgrpc:force \
           go.opentelemetry.io/contrib/instrumentation/net/http/httptrace/otelhttptrace:go.opentelemetry.io/contrib/instrumentation/net/http/httptrace/otelhttptrace/instrumentation/net/http/httptrace/otelhttptrace:force"

do_compile:prepend() {
    cd ${S}/src/import
    for s in $sites; do
        site_dest=$(echo $s | cut -d: -f1)
        site_source=$(echo $s | cut -d: -f2)
        force_flag=$(echo $s | cut -d: -f3)

        mkdir -p vendor.copy/$site_dest

        # create a temporary exclude file
        exclude_file=$(mktemp)

        find vendor.fetch/$site_source -type d -print0 | \
        xargs -0 du -sBM 2>/dev/null | \
        awk '{if ($1+0 > 500) print substr($0, index($0,$2))}' | \
        sed 's|^vendor.fetch/||' > "$exclude_file"

        if [ -n "$force_flag" ]; then
            echo "[INFO] $site_dest: force copying .go files"
            rm -rf vendor.copy/$site_dest
            rsync -a \
                --exclude='vendor/' \
                --exclude='.git/' \
                --exclude-from="$exclude_file" \
                vendor.fetch/$site_source/ vendor.copy/$site_dest
        else
            if [ -n "$(ls -A vendor.copy/$site_dest/*.go 2> /dev/null)" ]; then
                echo "[INFO] vendor.fetch/$site_source -> $site_dest: go copy skipped (files present)"
                true
            else
                echo "[INFO] $site_dest: copying .go files"
                rsync -a \
                    --exclude='vendor/' \
                    --exclude='.git/' \
                    --exclude-from="$exclude_file" \
                    vendor.fetch/$site_source/ vendor.copy/$site_dest
            fi
        fi

        rm -f "$exclude_file"
    done
}
