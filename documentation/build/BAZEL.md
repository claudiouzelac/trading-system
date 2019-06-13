# Bazel

[Bazel](https://www.bazel.build/) is used as the build system for this project.  It was a project open-sourced
by Google.

## Version Used

This project uses the latest version of Bazel at the time of creating this project which is [0.26.1](https://github.com/bazelbuild/bazel/releases).

## Installation

Bazel has platform specific instructions for the installation of the tooling.  It is located [here](https://www.bazel.build/) under the
`Get Bazel` section of their documentation.

## Bazel Documentation

The documentation for the `0.26.1` version of Bazel can be found [here](https://docs.bazel.build/versions/0.26.0/bazel-overview.html).

## Building

You can build all targets for this project with the command from your terminal of:

    `bazel build //...`

## References

1. [Bazel Protocol Buffers](https://github.com/protocolbuffers/protobuf/blob/master/examples/WORKSPACE)
2. [Protocol Buffer Conventions](https://github.com/bowlofstew/proto_library/blob/master/src/BUILD)
3. [Writing Bazel rules: simple binary rule](https://jayconrod.com/posts/106/writing-bazel-rules--simple-binary-rule)
4. [Writing Bazel rules: moving logic to execution](https://jayconrod.com/posts/109/writing-bazel-rules--moving-logic-to-execution)
5. [Writing Bazel rules: data and runfiles](https://jayconrod.com/posts/108/writing-bazel-rules--data-and-runfiles)
6. [Writing Bazel rules: library rule, depsets, providers](https://jayconrod.com/posts/107/writing-bazel-rules--library-rule--depsets--providers)
7. [Migrating to Bazel: Part 1](https://jayconrod.com/posts/97/migrating-to-bazel--part-1)
8. [Migrating to Bazel: Part 2](https://jayconrod.com/posts/98/migrating-to-bazel--part-2)

## Author(s)

Stewart Henderson