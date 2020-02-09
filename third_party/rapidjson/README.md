# Tencent Rapid JSON Third Party Dependency

This directory provides the rapidjson component in both executable and library format for consumers.

## Prerequisites

* Bazel 0.26.1 or greater
* CMake
* Modern C++ Compiler

## Building

Bazel can compile rapidjson with the follow command from a command terminal
from the root directory of this project:

```
bazel build @zlib//:all
```

### Example Build Output

```
bazel build @zlib//:all
INFO: Analyzed 2 targets (0 packages loaded, 0 targets configured).
INFO: Found 2 targets...
INFO: Elapsed time: 0.058s, Critical Path: 0.00s
INFO: 0 processes.
INFO: Build completed successfully, 1 total action
```

## Author(s)

Stewart Henderson
