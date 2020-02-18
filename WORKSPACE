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
RULES_BOOST_COMMIT      = "353a58c5d231293795e7b63c2c21467922153add" #pragma: allowlist secret
RULES_PROTOCOL_COMMIT   = "bedc40cd47b43dde857a7720066aadcf76c7dd3b" #pragma: allowlist secret
RULES_PYTHON_COMMIT     = "94677401bc56ed5d756f50b441a6a5c7f735a6d4" #pragma: allowlist secret

########################################################################
# Dependency Commits
########################################################################
QUICKFIX_COMMIT             = "6908dc8c1084eeb7af7f322d35216e9965684489"
GLOG_COMMIT                 = "195d416e3b1c8dc06980439f6acd3ebd40b6b820" # pragma: allowlist secret`
GOOGLE_TEST_COMMIT          = "3f5b5b8f8493a03fa25f1e4a7eae7678514a431d"
GOOGLE_BENCHMARK_COMMIT     = "7d856b03047e7bf09ccc9e9878e299493541b468"
RAPIDJSON_COMMIT            = "418331e99f859f00bdc8306f69eba67e8693c55e" # pragma: allowlist secret
ZLIB_COMMIT                 = "cacf7f1d4e3d44d871b605da3b647f07d718623f" # pragma: allowlist secret
GFLAGS_COMMIT               = "2e227c3daae2ea8899f49858a23f3d318ea39b57" # pragma: allowlist secret
DOUBLE_CONVERSION_COMMIT    = "5fa81e88ef24e735b4283b8f7454dc59693ac1fc" # pragma: allowlist secret
ABSEIL_COMMIT               = "aa844899c937bde5d2b24f276b59997e5b668bde" # pragma: allowlist secret
TFQUANTFINANCE_COMMIT       = "8aca1205e484e557b63f37078fe925d11c622d3b" # pragma: allowlist secret
GOOGLE_RE2_COMMIT           = "b0a41e52137a4cae183dcf194faa007cd9a1c344" # pragma: allowlist secret

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
    remote = "https://github.com/google/glog.git",
    commit = GLOG_COMMIT,
)

git_repository(
    name = "com_github_gflags_gflags",
    remote = "https://github.com/gflags/gflags.git",
    commit = GFLAGS_COMMIT
)

git_repository(
    name = "com_github_google_test",
    remote = "https://github.com/google/googletest.git",
    commit = GOOGLE_TEST_COMMIT,
)

# Abeil gtest binding
git_repository(
    name = "com_google_googletest",
    remote = "https://github.com/google/googletest.git",
    commit = GOOGLE_TEST_COMMIT,
)

git_repository(
    name = "com_github_google_benchmark",
    remote = "https://github.com/google/benchmark.git",
    commit = GOOGLE_BENCHMARK_COMMIT,
)

git_repository(
    name = "com_github_google_double_conversion",
    remote = "https://github.com/google/double-conversion.git",
    commit = DOUBLE_CONVERSION_COMMIT,
)

git_repository(
    name = "com_google_absl",
    remote = "https://github.com/abseil/abseil-cpp.git",
    commit = ABSEIL_COMMIT,
)

git_repository(
    name = "com_google_tf_quant_finance",
    remote = "https://github.com/google/tf-quant-finance.git",
    commit = TFQUANTFINANCE_COMMIT,
)

git_repository(
    name = "com_google_re2",
    remote = "https://github.com/google/re2.git",
    commit = GOOGLE_RE2_COMMIT,
)

new_git_repository(
    name = "org_quickfix",
    remote = "https://github.com/quickfix/quickfix.git",
    commit = QUICKFIX_COMMIT,
    build_file_content = """filegroup(name = "libquickfix_all", srcs = glob(["**"]), visibility = ["//visibility:public"])"""
)

new_git_repository(
    name = "org_tencent_rapidjson",
    remote = "https://github.com/Tencent/rapidjson.git",
    commit = RAPIDJSON_COMMIT,
    build_file = "//third_party/rapidjson/BUILD",
)

new_git_repository(
    name = "org_madler_zlib",
    remote = "https://github.com/madler/zlib.git",
    commit = ZLIB_COMMIT,
    build_file = "//third_party/zlib/BUILD",
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
load("@com_github_nelhage_rules_boost//:boost/boost.bzl", "boost_deps")

pip_repositories()
protobuf_deps()
cpp_proto_compile()
rules_foreign_cc_dependencies()
boost_deps()
python_proto_library()
boost_deps()

pip3_import(
    name = "protobuf_py_deps",
    requirements = "@build_stack_rules_proto//python/requirements:protobuf.txt",
)

load("@protobuf_py_deps//:requirements.bzl", protobuf_pip_install = "pip_install")

protobuf_pip_install()
