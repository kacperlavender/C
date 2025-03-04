#include "gtest/gtest.h"

#include "mylib.hpp"

TEST(MylibTest, IsReturning1) {
    EXPECT_EQ(return_1(), 1);
}

TEST(DummyTest, AlwaysFail) {
    EXPECT_EQ(0, 1);
}
