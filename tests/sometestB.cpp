#include <stdio.h>
#include <string.h>

#include "gtest/gtest.h"

// 测试B项目下的test1函数
TEST(someTestB, test1) {
    EXPECT_EQ (0, 0);
}


/*
 * 测试B项目下的test2函数
 */
TEST(someTestB, test2) {
    EXPECT_EQ (0, 6);
}
