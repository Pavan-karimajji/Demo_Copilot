#include "gtest/gtest.h"
#include "ScientificCalculator.h"

TEST(ScientificCalculatorTest, Add) {
    EXPECT_EQ(ScientificCalculator::add(2.0, 3.0), 5.0);
}

TEST(ScientificCalculatorTest, Subtract) {
    EXPECT_EQ(ScientificCalculator::subtract(5.0, 3.0), 2.0);
}

TEST(ScientificCalculatorTest, Multiply) {
    EXPECT_EQ(ScientificCalculator::multiply(2.0, 3.0), 6.0);
}

TEST(ScientificCalculatorTest, Divide) {
    EXPECT_EQ(ScientificCalculator::divide(6.0, 3.0), 2.0);
    EXPECT_THROW(ScientificCalculator::divide(1.0, 0.0), std::invalid_argument);
}

TEST(ScientificCalculatorTest, Power) {
    EXPECT_EQ(ScientificCalculator::power(2.0, 3.0), 8.0);
}

TEST(ScientificCalculatorTest, SquareRoot) {
    EXPECT_EQ(ScientificCalculator::squareRoot(9.0), 3.0);
    EXPECT_THROW(ScientificCalculator::squareRoot(-1.0), std::invalid_argument);
}

TEST(ScientificCalculatorTest, Log) {
	EXPECT_EQ(ScientificCalculator::log(1.0), 0.0);
	EXPECT_THROW(ScientificCalculator::log(0.0), std::invalid_argument);
	EXPECT_THROW(ScientificCalculator::log(-1.0), std::invalid_argument);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
