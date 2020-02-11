# Copyright 2019 Stewart Henderson. All rights reserved.

# [Bazel `visibility` attribute](https://docs.bazel.build/versions/master/be/common-definitions.html)
package(default_visibility = ["//visibility:public"])

# [Bazel Filegroups](https://docs.bazel.build/versions/master/be/general.html#filegroup)
filegroup(
    name = "applications_exchanges_api_alpaca_incs",
    srcs = glob([
        "inc/*.h",
    ]),
)

filegroup(
    name = "applications_exchanges_api_alpaca_srcs",
    srcs = glob([
        "src/*.cc",
    ]),
)

cc_library(
    name = "applications_exchanges_api_alpaca_application",
    srcs = [":applications_exchanges_api_alpaca_srcs"],
    hdrs = [":applications_exchanges_api_alpaca_incs"],
    includes = [":applications_exchanges_api_alpaca_incs"],
    deps = [
        "@boost//:beast"
    ],
)
