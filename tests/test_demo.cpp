#include <stdio.h>
#include <string.h>

#include "gtest/gtest.h"

#include "../src/demo.h"
 
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

// 测试A模块下 函数功能 test1
TEST(someTestA, test1) {
    EXPECT_EQ (0, 0);
}


/**
 * 测试A模块 函数功能 test2
 */
TEST(someTestA, test2) {
    EXPECT_EQ (0, 6);
}
