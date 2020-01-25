# QuickFIX Abstraction for Exchange Applications

This directory contains source code that provides abstractions for the QuickFIX library.  This will
allow for other components in the future to be switched in, in the future should it be needed.

## FIX Engine Alternatives

* [Onix](https://www.onixs.biz/)
* [B2Bits](https://www.b2bits.com/trading_solutions/fix_engines/fix_engine_cpp.html)
* [Fix8](http://fix8.org/)
* [Chronicle](https://chronicle.software/products/fix-engine/)

## Building

Bazel can compile this target with the follow command from a command terminal
from the root directory of this project:

```
bazel build //applications/exchanges/fix/base:applications_exchanges_fix_base_library
```

## Author(s)

Stewart Henderson
