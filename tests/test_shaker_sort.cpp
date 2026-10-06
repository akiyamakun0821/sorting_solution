#include "pch.h"
#include "gtest/gtest.h"
#include "shaker_sort.h"
#include <vector>

TEST(ShakerSortTest, PersonalArrayInt) {
    std::vector<int> arr = { 5, 10, 18, 0, 2, 7, 11, 14 };
    std::vector<int> expected = { 0, 2, 5, 7, 10, 11, 14, 18 };
    shakerSort(arr);
    EXPECT_EQ(arr, expected);
}

TEST(ShakerSortTest, NormalCaseDouble) {
    std::vector<double> arr = { 5.5, 10.1, 1.1, 0.0, 2.2 };
    std::vector<double> expected = { 0.0, 1.1, 2.2, 5.5, 10.1 };
    shakerSort(arr);
    EXPECT_EQ(arr, expected);
}

TEST(ShakerSortTest, BoundaryCases) {
    std::vector<int> empty_arr = {};
    shakerSort(empty_arr);
    EXPECT_TRUE(empty_arr.empty());
}

TEST(ShakerSortTest, ReversedArray) {
    std::vector<int> arr = { 5, 4, 3, 2, 1 };
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    shakerSort(arr);
    EXPECT_EQ(arr, expected);
}
