#include "pch.h"
#include "gtest/gtest.h"
#include "selection_sort.h"
#include <vector>

TEST(SelectionSortTest, NormalCaseInt) {
    std::vector<int> arr = { 5, 10, 18, 0, 2, 7, 11, 14 };
    std::vector<int> expected = { 0, 2, 5, 7, 10, 11, 14, 18 };
    selectionSort(arr);
    EXPECT_EQ(arr, expected);
}
TEST(SelectionSortTest, NormalCaseDouble) {
    std::vector<double> arr = { 3.14, 1.59, 2.65, 0.58 };
    std::vector<double> expected = { 0.58, 1.59, 2.65, 3.14 };
    selectionSort(arr);
    EXPECT_EQ(arr, expected);
}
TEST(SelectionSortTest, EmptyVector) {
    std::vector<int> arr = {};
    selectionSort(arr);
    EXPECT_TRUE(arr.empty());
}
TEST(SelectionSortTest, SortedAndReversed) {
    std::vector<int> reversed = { 5, 4, 3, 2, 1 };
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    selectionSort(reversed);
    EXPECT_EQ(reversed, expected);
}
