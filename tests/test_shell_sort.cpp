#include "pch.h"
#include "gtest/gtest.h"
#include "shell_sort.h"
#include <vector>

TEST(ShellSortTest, PersonalArrayInt) {
    std::vector<int> arr = { 5, 10, 18, 0, 2, 7, 11, 14 };
    std::vector<int> expected = { 0, 2, 5, 7, 10, 11, 14, 18 };
    shellSort(arr);
    EXPECT_EQ(arr, expected);
}

TEST(ShellSortTest, NormalCaseDouble) {
    std::vector<double> arr = { 4.2, 1.1, 9.9, 0.5 };
    std::vector<double> expected = { 0.5, 1.1, 4.2, 9.9 };
    shellSort(arr);
    EXPECT_EQ(arr, expected);
}

TEST(ShellSortTest, BoundaryCases) {
    std::vector<int> empty_arr = {};
    shellSort(empty_arr);
    EXPECT_TRUE(empty_arr.empty());
}
