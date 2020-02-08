# Copyright 2019 Stewart Henderson. All rights reserved.

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
        "tests/*.h"
    ]),
)

cc_library(
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

cc_binary(
    name = "applications_exchanges_fix_fake_server",
    srcs = [
        ":applications_exchanges_fix_fake_server_srcs",
    ],
    deps = [
        ":applications_exchanges_fix_fake_server_library",
        "//src/applications/exchanges/fix/base:applications_exchanges_fix_base_library",
        "//src/applications/exchanges/fix/quickfix:applications_exchanges_fix_quickfix_library",
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
