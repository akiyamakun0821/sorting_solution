#include "pch.h"
#include "gtest/gtest.h"
#include "quick_sort.h"
#include <vector>

TEST(QuickSortTest, PersonalArrayInt) {
    std::vector<int> arr = { 5, 10, 18, 0, 2, 7, 11, 14 };
    std::vector<int> expected = { 0, 2, 5, 7, 10, 11, 14, 18 };
    quickSort(arr);
    EXPECT_EQ(arr, expected);
}

TEST(QuickSortTest, NormalCaseDouble) {
    std::vector<double> arr = { 4.2, 1.1, 9.9, 0.5 };
    std::vector<double> expected = { 0.5, 1.1, 4.2, 9.9 };
    quickSort(arr);
    EXPECT_EQ(arr, expected);
}

TEST(QuickSortTest, BoundaryCases) {
    std::vector<int> empty_arr = {};
    quickSort(empty_arr);
    EXPECT_TRUE(empty_arr.empty());

    std::vector<int> single_arr = { 99 };
    quickSort(single_arr);
    EXPECT_EQ(single_arr[0], 99);
}

TEST(QuickSortTest, ReversedArray) {
    std::vector<int> arr = { 5, 4, 3, 2, 1 };
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    quickSort(arr);
    EXPECT_EQ(arr, expected);
}
