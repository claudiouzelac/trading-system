# Copyright 2019 Stewart Henderson. All rights reserved.

# [Bazel `visibility` attribute](https://docs.bazel.build/versions/master/be/common-definitions.html)
package(default_visibility = ["//visibility:public"])

# [Bazel Filegroups](https://docs.bazel.build/versions/master/be/general.html#filegroup)
filegroup(
    name = "libraries_pricing_currency_spot_arbitrage_incs",
    srcs = glob([
        "inc/*.h",
    ]),
)

filegroup(
    name = "libraries_pricing_currency_spot_arbitrage_srcs",
    srcs = glob([
        "src/*.cc",
    ]),
)

cc_library(
    name = "libraries_pricing_currency_spot_arbitrage_library",
    srcs = [":libraries_pricing_currency_spot_arbitrage_srcs"],
    hdrs = [":libraries_pricing_currency_spot_arbitrage_incs"],
    includes = [":libraries_pricing_currency_spot_arbitrage_incs"],
    deps = [
        "//src/libraries/protos/risk:trading_risk_cpp_proto"
    ],
    linkstatic=1
)

cc_test(
    name = "libraries_pricing_currency_spot_arbitrage_library_tests",
    srcs = [
        "tests/unit/calculation_tests.cc",
    ],
    size = "small",
    visibility = [
        "//visibility:private",
    ],
    deps = [
     "@com_google_googletest//:gtest_main",
     ":libraries_pricing_currency_spot_arbitrage_library",
    ]
)
