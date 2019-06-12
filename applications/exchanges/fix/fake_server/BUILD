load("//tools:clang_format.bzl", "clang_formatted_cc_binary")

# [Bazel `visibility` attribute](https://docs.bazel.build/versions/master/be/common-definitions.html)

package(default_visibility = ["//visibility:public"])

# [Bazel Filegroups](https://docs.bazel.build/versions/master/be/general.html#filegroup)

filegroup(
    name = "applications_exchanges_fix_fake_server_incs",
    srcs = glob([
        "incs/*.h",
    ]),
)

filegroup(
    name = "applications_exchanges_fix_fake_server_srcs",
    srcs = glob([
        "srcs/*.cc",
    ]),
)

clang_formatted_cc_binary(
    name = "applications_exchanges_fix_fake_server_clang_format",
    srcs = [
        ":applications_exchanges_fix_fake_server_srcs",
    ],
)

# [Bazel C and C++ Rules](https://docs.bazel.build/versions/0.26.0/be/c-cpp.html)

cc_binary(
    name = "applications_exchanges_fix_fake_server",
    srcs = [
        ":applications_exchanges_fix_fake_server_srcs",
        ":applications_exchanges_fix_fake_server_incs"
    ],
    deps = [
        "//third_party/quickfix:quickfix_lib",
    ],
)