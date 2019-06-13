# Copyright 2019 Stewart Henderson. All rights reserved.

load("//tools:clang_format.bzl",
    "clang_formatted_cc_binary",
    "clang_formatted_cc_library"
)

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

filegroup(
    name = "applications_exchanges_fix_fake_server_test_srcs",
    srcs = glob([
        "tests/*.cc",
    ]),
)

clang_formatted_cc_library(
    name = "applications_exchanges_fix_fake_server_library",
    srcs = [
        ":applications_exchanges_fix_fake_server_incs"
    ],
    hdrs = [
        ":applications_exchanges_fix_fake_server_incs"
    ],
    strip_include_prefix = "incs",
    linkstatic=1,
    deps = [
        "//third_party/quickfix:quickfix_lib",
    ]
)

clang_formatted_cc_binary(
    name = "applications_exchanges_fix_fake_server",
    srcs = [
        ":applications_exchanges_fix_fake_server_srcs",
    ],
    deps = [
        ":applications_exchanges_fix_fake_server_library",
        "//third_party/quickfix:quickfix_lib",
    ],
)

# TODO: clang_formatted_
cc_test(
    name = "trading_exchanges_base_fix_tests",
    srcs = [":applications_exchanges_fix_fake_server_test_srcs"],
    size = "small",
    visibility = ["//visibility:private"],
    copts = ["-Iexternal/gtest/include"],
    deps = [
        "@com_github_google_test//:gtest_main",
    ],
)