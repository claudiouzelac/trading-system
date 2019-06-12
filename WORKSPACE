# [Bazel Workspace Concepts](https://docs.bazel.build/versions/0.26.0/build-ref.html#workspace)

workspace(name = "com_github_bowlofstew_tradingsystem")

load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository", "new_git_repository")

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


load("@rules_foreign_cc//:workspace_definitions.bzl", 
    "rules_foreign_cc_dependencies"
)

rules_foreign_cc_dependencies()