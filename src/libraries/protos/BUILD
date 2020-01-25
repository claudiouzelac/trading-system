load("@build_stack_rules_proto//cpp:cpp_proto_compile.bzl", "cpp_proto_compile")

proto_library(
    name = "person_proto",
    srcs = [
        "edge.proto",
        "bankroll.proto"
    ],
    visibility = [
        "//visibility:public",
    ],
    deps = [
    ],
)

# bazel build //src/libraries/protos:trading_cpp_proto
cpp_proto_compile(
    name = "trading_cpp_proto",
    deps = [":person_proto"],
)
