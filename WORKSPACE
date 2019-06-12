# Copyright 2019 Stewart Henderson. All rights reserved.
# 
# [Bazel Workspace Concepts](https://docs.bazel.build/versions/0.26.0/build-ref.html#workspace)

workspace(name = "com_github_bowlofstew_tradingsystem")

load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository", "new_git_repository")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

########################################################################
# Bazel Rules Commits
########################################################################
RULES_FOREIGN_CC_COMMIT = "5f9879c7ec694248ad60a6b2e43e24898cfbf33e"

########################################################################
# Dependency Commits
########################################################################
QUICKFIX_COMMIT             = "dab6d9f937e3bc700a2e8be681936b0069857609"

########################################################################
# Bazel Rules
########################################################################


# [Bazel git Repository](https://docs.bazel.build/versions/0.26.0/repo/git.html)

git_repository(
    name = "rules_foreign_cc",
    remote = "https://github.com/bazelbuild/rules_foreign_cc.git",
    commit = RULES_FOREIGN_CC_COMMIT,
)

########################################################################
# Dependencies
########################################################################

new_git_repository(
    name = "org_quickfix",
    remote = "https://github.com/quickfix/quickfix.git",
    commit = QUICKFIX_COMMIT,
    build_file_content = """filegroup(name = "libquickfix_all", srcs = glob(["**"]), visibility = ["//visibility:public"])"""
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

load("@rules_foreign_cc//:workspace_definitions.bzl", 
    "rules_foreign_cc_dependencies"
)

load("@com_google_protobuf//:protobuf_deps.bzl", "protobuf_deps")

protobuf_deps()

rules_foreign_cc_dependencies()