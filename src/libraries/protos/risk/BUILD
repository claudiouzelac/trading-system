# [Bazel `visibility` attribute](https://docs.bazel.build/versions/master/be/common-definitions.html)
package(default_visibility = ["//visibility:public"])

load("@build_stack_rules_proto//cpp:cpp_proto_library.bzl", "cpp_proto_library")
load("@build_stack_rules_proto//python:python_proto_library.bzl", "python_proto_library")

proto_library(
    name = "risk_proto",
    srcs = [
        "edge.proto",
        "bankroll.proto",
        "asset.proto",
        "portfolio.proto",
        "currency.proto",
        "tradeprice.proto",
        "venue.proto"
    ],
    visibility = [
        "//visibility:public",
    ],
    deps = [
    ],
)

# bazel build //src/libraries/protos/risk:trading_risk_cpp_proto
cpp_proto_library(
    name = "trading_risk_cpp_proto",
    deps = [":risk_proto"],
)

python_proto_library(
    name = "trading_risk_python_proto",
    deps = [":risk_proto"],
    verbose = 3
)
