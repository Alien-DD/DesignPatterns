#include "sqrt.cc"
#include <gtest/gtest.h>

TEST(SquareRootTest, PositiveNos)
    {
    EXPECT_EQ(6, squareRoot(36.0));
    EXPECT_EQ(18.0, squareRoot(324.0));
    EXPECT_EQ(25.4, squareRoot(645.16));
    EXPECT_EQ(0, squareRoot(0.0));
    }

TEST(SquareRootTest, NegativeNos)
    {
    EXPECT_EQ(-1.0, squareRoot(-15.0));
    EXPECT_EQ(-1.0, squareRoot(-0.2));
    }

