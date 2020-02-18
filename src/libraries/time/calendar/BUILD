# Copyright 2019 Stewart Henderson. All rights reserved.

# [Bazel `visibility` attribute](https://docs.bazel.build/versions/master/be/common-definitions.html)
package(default_visibility = ["//visibility:public"])

# [Bazel Filegroups](https://docs.bazel.build/versions/master/be/general.html#filegroup)
filegroup(
    name = "libraries_time_calendar_incs",
    srcs = glob([
        "inc/*.h",
    ]),
)

filegroup(
    name = "libraries_time_calendar_srcs",
    srcs = glob([
        "src/*.cc",
    ]),
)

cc_library(
    name = "libraries_time_calendar_library",
    srcs = [":libraries_time_calendar_srcs"],
    hdrs = [":libraries_time_calendar_incs"],
    includes = [":libraries_time_calendar_incs"],
    deps = [
        "@com_github_google_glog//:glog",
        "@boost//:date_time",
    ],
    linkstatic=1
)
