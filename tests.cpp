// tests.cpp
#include "swap.cpp"
#include <gtest/gtest.h>

TEST(SwappingTest, 5Swap10) {
    int number1 = 5, number2 = 10;
    swapping(number1, number2);
    ASSERT_EQ(10, number1);
    ASSERT_EQ(5, number2);
}

TEST(SwappingTest, 20swap10) {
    int number1 = 20, number2 = 10;
    swapping(number1, number2);
    ASSERT_EQ(10, number1);
    ASSERT_EQ(20, number2);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}