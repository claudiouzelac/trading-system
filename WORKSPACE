# Copyright 2019 Stewart Henderson. All rights reserved.
#
# [Bazel Workspace Concepts](https://docs.bazel.build/versions/0.26.0/build-ref.html#workspace)

workspace(name = "com_github_bowlofstew_tradingsystem")

load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository", "new_git_repository")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

########################################################################
# Bazel Rules Commits
########################################################################
RULES_FOREIGN_CC_COMMIT = "0f0c0da3a1c45f3162dcd87d0fc1278804e435bb"
RULES_BOOST_COMMIT      = "417642961150e987bc1ac78c7814c617566ffdaa"
RULES_PROTOCOL_COMMIT   = "bedc40cd47b43dde857a7720066aadcf76c7dd3b" #pragma: allowlist secret
RULES_PYTHON_COMMIT     = "94677401bc56ed5d756f50b441a6a5c7f735a6d4" #pragma: allowlist secret

########################################################################
# Dependency Commits
########################################################################
QUICKFIX_COMMIT             = "6908dc8c1084eeb7af7f322d35216e9965684489"
LIBRDKAFKA_COMMIT           = "da83c93434f190cd9c24ba8b7c8e6e6911c3b350"
GLOG_COMMIT                 = "fc87161c962f11633a1bc5f278e038b05e8c8ed5"
GOOGLE_TEST_COMMIT          = "3f5b5b8f8493a03fa25f1e4a7eae7678514a431d"
GOOGLE_BENCHMARK_COMMIT     = "7d856b03047e7bf09ccc9e9878e299493541b468"

########################################################################
# Bazel Rules
########################################################################


# [Bazel git Repository](https://docs.bazel.build/versions/0.26.0/repo/git.html)

git_repository(
    name = "rules_foreign_cc",
    remote = "https://github.com/bazelbuild/rules_foreign_cc.git",
    commit = RULES_FOREIGN_CC_COMMIT,
)

git_repository(
    name = "com_github_nelhage_rules_boost",
    commit = RULES_BOOST_COMMIT,
    remote = "https://github.com/nelhage/rules_boost",
)

git_repository(
    name = "build_stack_rules_proto",
    commit = RULES_PROTOCOL_COMMIT,
    remote = "https://github.com/stackb/rules_proto",
)

git_repository(
    name = "rules_python",
    remote = "https://github.com/bazelbuild/rules_python.git",
    commit = RULES_PYTHON_COMMIT,
)

########################################################################
# Dependencies
########################################################################

git_repository(
    name = "com_github_google_glog",
    remote = "https://github.com/drigz/glog.git",
    commit = GLOG_COMMIT,
)

git_repository(
    name = "com_github_google_test",
    remote = "https://github.com/google/googletest.git",
    commit = GOOGLE_TEST_COMMIT,
)

git_repository(
    name = "com_github_google_benchmark",
    remote = "https://github.com/google/benchmark.git",
    commit = GOOGLE_BENCHMARK_COMMIT,
)

new_git_repository(
    name = "org_quickfix",
    remote = "https://github.com/quickfix/quickfix.git",
    commit = QUICKFIX_COMMIT,
    build_file_content = """filegroup(name = "libquickfix_all", srcs = glob(["**"]), visibility = ["//visibility:public"])"""
)

new_git_repository(
    name = "org_librdkafka",
    remote = "https://github.com/edenhill/librdkafka.git",
    commit = LIBRDKAFKA_COMMIT,
    build_file_content = """filegroup(name = "librdkafka_all", srcs = glob(["**"]), visibility = ["//visibility:public"])"""
)

# This com_google_protobuf repository is required for proto_library rule.
# It provides the protocol compiler binary (i.e., protoc).
http_archive(
    name = "com_google_protobuf",
    strip_prefix = "protobuf-master",
    urls = ["https://github.com/protocolbuffers/protobuf/archive/master.zip"],
)

# This com_google_protobuf_cc repository is required for cc_proto_library
# rule. It provides protobuf C++ runtime. Note that it actually is the same
# repo as com_google_protobuf but has to be given a different name as
# required by bazel.
http_archive(
    name = "com_google_protobuf_cc",
    strip_prefix = "protobuf-master",
    urls = ["https://github.com/protocolbuffers/protobuf/archive/master.zip"],
)

# Similar to com_google_protobuf_cc but for Java (i.e., java_proto_library).
http_archive(
    name = "com_google_protobuf_java",
    strip_prefix = "protobuf-master",
    urls = ["https://github.com/protocolbuffers/protobuf/archive/master.zip"],
)

# Similar to com_google_protobuf_cc but for Java lite. If you are building
# for Android, the lite version should be prefered because it has a much
# smaller code size.
http_archive(
    name = "com_google_protobuf_javalite",
    strip_prefix = "protobuf-javalite",
    urls = ["https://github.com/protocolbuffers/protobuf/archive/javalite.zip"],
)

load("@rules_foreign_cc//:workspace_definitions.bzl","rules_foreign_cc_dependencies")
load("@com_google_protobuf//:protobuf_deps.bzl", "protobuf_deps")
load("@com_github_nelhage_rules_boost//:boost/boost.bzl", "boost_deps")
load("@build_stack_rules_proto//cpp:deps.bzl", "cpp_proto_compile")
load("@build_stack_rules_proto//python:deps.bzl", "python_proto_library")
load("@rules_python//python:pip.bzl", "pip_repositories", "pip3_import")

pip_repositories()
protobuf_deps()
cpp_proto_compile()
rules_foreign_cc_dependencies()
boost_deps()
python_proto_library()

pip3_import(
    name = "protobuf_py_deps",
    requirements = "@build_stack_rules_proto//python/requirements:protobuf.txt",
)

load("@protobuf_py_deps//:requirements.bzl", protobuf_pip_install = "pip_install")

protobuf_pip_install()

pip3_import(
   name = "libraries_pricing_currency_spot_arbitrage",
   requirements = "//src/libraries/pricing/currency/spot/arbitrage:requirements.txt",
)

pip3_import(
   name = "blackjack_library",
   requirements = "//src/libraries/blackjack:requirements.txt",
)


load("@blackjack_library//:requirements.bzl", "pip_install")

pip_install()
