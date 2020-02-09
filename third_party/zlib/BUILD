package(default_visibility = ["//visibility:public"])

licenses(["notice"])  # BSD/MIT-like license (for zlib)

SOURCES = [
    "adler32.c",
    "compress.c",
    "crc32.c",
    "deflate.c",
    "gzclose.c",
    "gzlib.c",
    "gzread.c",
    "gzwrite.c",
    "infback.c",
    "inffast.c",
    "inflate.c",
    "inftrees.c",
    "trees.c",
    "uncompr.c",
    "zutil.c",
]

cc_library(
  name = "zlib",
  srcs = glob(["**/*.c"]),
  hdrs = glob(["**/*.h"]),
  copts = [
    "-Wno-unused-variable",
    "-Wno-implicit-function-declaration",
  ],
)
