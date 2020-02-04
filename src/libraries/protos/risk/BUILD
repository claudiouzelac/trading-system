load("@build_stack_rules_proto//cpp:cpp_proto_compile.bzl", "cpp_proto_compile")

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
cpp_proto_compile(
    name = "trading_risk_cpp_proto",
    deps = [":risk_proto"],
)
