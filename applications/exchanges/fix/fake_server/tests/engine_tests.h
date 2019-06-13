#include "gtest/gtest.h"

TEST(HelloTest, GetGreet) {
  EXPECT_EQ("Hello Bazel", "Hello Bazel");
}