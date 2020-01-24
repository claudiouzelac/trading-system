// Copyright 2019 Stewart Henderson. All rights reserved.

#include "gtest/gtest.h"

TEST(HelloTest, GetGreet) {
  EXPECT_EQ("Hello Bazel", "Hello Bazel");
}
