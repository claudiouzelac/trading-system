# Copyright 2019 Stewart Henderson. All rights reserved.

# [Bazel `visibility` attribute](https://docs.bazel.build/versions/master/be/common-definitions.html)
package(default_visibility = ["//visibility:public"])

load(
    "@rules_python//python:python.bzl",
    "py_library",
    "py_test",
)

load("@libraries_pricing_currency_spot_arbitrage//:requirements.bzl", "requirement")

PY_DEPENDENCIES = [
    requirement("structlog"),
]

py_library(
    name = "libraries_models",
    srcs = glob(["src/*.py"]),
    deps = PY_DEPENDENCIES,
)
