#include <gtest/gtest.h>
#include <limits>

#include <functions.h>

using namespace math;

TEST(MySimpleTest, RegularNumbers)
{
    EXPECT_DOUBLE_EQ(MySqrt(1.0), 1.0);
    EXPECT_DOUBLE_EQ(MySqrt(4.0), 2.0);
    EXPECT_DOUBLE_EQ(MySqrt(9.0), 3.0);
    EXPECT_DOUBLE_EQ(MySqrt(16.0), 4.0);
    EXPECT_DOUBLE_EQ(MySqrt(25.0), 5.0);
}

TEST(MySimpleTest, IrregularNumbers)
{
    EXPECT_DOUBLE_EQ(MySqrt(2.0), 1.4142135623730951);
    EXPECT_DOUBLE_EQ(MySqrt(3.0), 1.7320508075688772);
    EXPECT_DOUBLE_EQ(MySqrt(0.25), 0.5);
}

TEST(MySimpleTest, CheckInfinity)
{
    EXPECT_TRUE(std::isinf(MySqrt(INFINITY)));
    EXPECT_TRUE(std::isinf(MySqrt(-INFINITY)));
}

TEST(MySimpleTest, ThrowsOnNan)
{
    EXPECT_THROW(
        {
            MySqrt(NAN);
        },
        std::logic_error
    );
}

TEST(MySimpleTest, ThrowsOnNegative)
{
    EXPECT_THROW(
        {
            MySqrt(-1.0);
        },
        std::logic_error
    );
    
    EXPECT_THROW(
        {
            MySqrt(-0.0001);
        },
        std::logic_error
    );
    
    EXPECT_THROW(
        {
            MySqrt(-1000.0);
        },
        std::logic_error
    );
}