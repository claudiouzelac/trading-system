package(default_visibility = ["//visibility:public"])

licenses(["notice"])

load("@rules_foreign_cc//tools/build_defs:cmake.bzl", "cmake_external")

cmake_external(
    name = "librdkafka",
    generate_crosstool_file = True,
    lib_source = "@org_librdkafka//:librdkafka_all",
    lib_name = "librdkafka",
    make_commands = [
        "make",
        "make install",
    ],
    shared_libraries = [
        "librdkafka.so",
        "librdkafka++.so",
    ],
)
