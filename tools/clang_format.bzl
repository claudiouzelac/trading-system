# Copyright 2019 Stewart Henderson. All rights reserved.
# 
# Credit: https://jin.crypt.sg/articles/bazel-pretty-print.html
# from [Jin](https://stackoverflow.com/users/521209/jin)

def clang_formatted_cc_binary(name, srcs, **kwargs):
    # Using a filegroup for code cleaniness
    native.filegroup(
        name = name + "_unformatted_srcs",
        srcs = srcs,
    )

    clang_format_srcs(
        name = name + "_formatted_srcs",
        srcs = [name + "_unformatted_srcs"],
    )

    # [Bazel C and C++ Rules](https://docs.bazel.build/versions/0.26.0/be/c-cpp.html)
    native.cc_binary(
        name = name,
        srcs = [name + "_formatted_srcs"],
        **kwargs
    )

def clang_formatted_cc_library(name, srcs, **kwargs):
    # Using a filegroup for code cleaniness
    native.filegroup(
        name = name + "_unformatted_srcs",
        srcs = srcs,
    )

    clang_format_srcs(
        name = name + "_formatted_srcs",
        srcs = [name + "_unformatted_srcs"],
    )

    # [Bazel C and C++ Rules](https://docs.bazel.build/versions/0.26.0/be/c-cpp.html)
    native.cc_library(
        name = name,
        srcs = [name + "_formatted_srcs"],
        **kwargs
    )

def _clang_format_srcs_impl(ctx):
    formatted_files = []

    for unformatted_file in ctx.files.srcs:
        formatted_file = ctx.actions.declare_file("formatted_" + unformatted_file.basename)
        formatted_files += [formatted_file]
        ctx.actions.run_shell(
            inputs = [unformatted_file],
            outputs = [formatted_file],
            progress_message = "Running clang-format on %s" % unformatted_file.short_path,
            command = "clang-format %s > %s" % (unformatted_file.path, formatted_file.path),
        )

    return struct(files = depset(formatted_files))

clang_format_srcs = rule(
    attrs = {
        "srcs": attr.label_list(allow_files = True),
    },
    implementation = _clang_format_srcs_impl,
)