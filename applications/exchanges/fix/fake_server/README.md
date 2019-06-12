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

## Dependencies

* [QuickFIX](https://github.com/quickfix/quickfix)

## Author(s)

Stewart Henderson