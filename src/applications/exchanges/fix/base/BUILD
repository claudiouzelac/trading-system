# Copyright 2019 Stewart Henderson. All rights reserved.

# [Bazel `visibility` attribute](https://docs.bazel.build/versions/master/be/common-definitions.html)

package(default_visibility = ["//visibility:public"])

# [Bazel Filegroups](https://docs.bazel.build/versions/master/be/general.html#filegroup)

filegroup(
    name = "applications_exchanges_fix_base_incs",
    srcs = glob([
        "incs/*.h",
    ]),
)

cc_library(
    name = "applications_exchanges_fix_base_library",
    srcs = [
        ":applications_exchanges_fix_base_incs"
    ],
    hdrs = [
        ":applications_exchanges_fix_base_incs"
    ],
    strip_include_prefix = "incs",
    linkstatic=1,
    deps = [
        "//src/applications/exchanges/fix/quickfix:applications_exchanges_fix_quickfix_library",
    ]
)
