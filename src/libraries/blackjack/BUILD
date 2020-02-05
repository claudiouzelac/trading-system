# Copyright 2019 Stewart Henderson. All rights reserved.

# [Bazel `visibility` attribute](https://docs.bazel.build/versions/master/be/common-definitions.html)
package(default_visibility = ["//visibility:public"])

load(
    "@rules_python//python:python.bzl",
    "py_library",
    "py_test",
)

load("@blackjack_library//:requirements.bzl", "requirement")

PY_DEPENDENCIES = [
]

py_library(
    name = "blackjack_library",
    srcs = glob(["src/*.py"]),
    deps = PY_DEPENDENCIES,
)

py_test(
    name = "blackjack_tests",
    srcs = glob([
        "tests/*.py",
        ]),
    deps = [
        ":blackjack_library"
    ],
    main = "tests/main.py"
)
