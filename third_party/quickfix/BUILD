# Copyright 2019 Stewart Henderson. All rights reserved.

package(default_visibility = ["//visibility:public"])

licenses(["notice"])

load("@rules_foreign_cc//tools/build_defs:cmake.bzl", "cmake_external")

cmake_external(
    name = "quickfix_lib",
    generate_crosstool_file = True,
    lib_source = "@org_quickfix//:libquickfix_all",
    lib_name = "libquickfix",
    make_commands = [
        "make",
        "make install",
    ],
    cache_entries = {
       "CMAKE_BUILD_TYPE": "RelWithDebInfo",
       # Requires a third_party openssl dep.
       "HAVE_SSL": "OFF",
    },
    shared_libraries = ["libquickfix.so"],
)
