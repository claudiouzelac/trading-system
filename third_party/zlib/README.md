# ZLib Third Party Dependency

This directory provides the zlib component in both executable and library format for consumers.

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
INFO: Analyzed 2 targets (2 packages loaded, 41 targets configured).
INFO: Found 2 targets...
INFO: Elapsed time: 1.006s, Critical Path: 0.71s
INFO: 18 processes: 18 darwin-sandbox.
INFO: Build completed successfully, 19 total actions
```

## Author(s)

Stewart Henderson
