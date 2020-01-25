# Fake FIX Server

This source code creates an executable that will provide a fake FIX server to test future
code being developed against.  This loosely replicates the counterparty that you would be
trading against to tests against.  A counterparty in this context could be an exchange such
as:

* CME: Chicago Merchantile Exchange
* NYMEX: New York Merchantile Exchange
* NYSE: New York Stock Exchange

This could also be for smaller counterparties that aren't centrally cleared such as you
may see in the currency markets.

## Building

Bazel can compile this target with the follow command from a command terminal
from the root directory of this project:

```
bazel build //applications/exchanges/fix/fake_server:applications_exchanges_fix_fake_server --subcommands
```

As part of this build, `clang-format` runs upon the code.  The formatted source code (headers, source files) are
placed in the directory `bazel-out/k8-fastbuild/bin/applications/exchanges/fix/fake_server` with respect to the
root directory of this project.  Upon inspection, you can copy them over as you desire to take the changes.

## Testing

Bazel can run the tests associated with this target with the following command from the command terminal
from the root directory of the project:

```
bazel test //applications/exchanges/fix/fake_server:trading_exchanges_base_fix_tests
```

## Coverage

Bazel can generate the coverage reports associated with the above test target with the following command from the
command terminal from the root directory of the project:

```
bazel coverage //applications/exchanges/fix/fake_server:trading_exchanges_base_fix_tests
```

## Dependencies

* [QuickFIX](https://github.com/quickfix/quickfix)

## Author(s)

Stewart Henderson
