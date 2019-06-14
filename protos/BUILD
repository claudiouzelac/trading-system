# Exchange Entity

# Convention:
# A cc_proto_library that wraps a proto_library named foo_proto
# should be called foo_cc_proto.
cc_proto_library(
    name = "exchange_cc_proto",
    deps = [":exchange_proto"],
)

# Conventions:
# 1. One proto_library rule per .proto file.
# 2. A file named foo.proto will be in a rule named foo_proto.
proto_library(
    name = "exchange_proto",
    srcs = ["exchange.proto"],
)

# Order Entity

cc_proto_library(
    name = "order_cc_proto",
    deps = [":order_proto"],
)

proto_library(
    name = "order_proto",
    srcs = ["order.proto"],
)

# Instrument Entity

cc_proto_library(
    name = "instrument_cc_proto",
    deps = [":instrument_proto"],
)

proto_library(
    name = "instrument_proto",
    srcs = ["instrument.proto"],
)