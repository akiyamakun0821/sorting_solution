#include "pch.h"
#include "gtest/gtest.h"
#include "insertion_sort.h"
#include <vector>

TEST(InsertionSortTest, NormalCaseInt) {
    std::vector<int> arr = { 5, 10, 18, 0, 2, 7, 11, 14 };
    std::vector<int> expected = { 0, 2, 5, 7, 10, 11, 14, 18 };
    insertionSort(arr);
    EXPECT_EQ(arr, expected);
}
TEST(InsertionSortTest, NormalCaseDouble) {
    std::vector<double> arr = { 3.14, 1.59, 2.65, 0.58 };
    std::vector<double> expected = { 0.58, 1.59, 2.65, 3.14 };
    insertionSort(arr);
    EXPECT_EQ(arr, expected);
}
TEST(InsertionSortTest, EmptyVector) {
    std::vector<int> arr = {};
    std::vector<int> expected = {};
    insertionSort(arr);
    EXPECT_EQ(arr, expected);
}
TEST(InsertionSortTest, SortedAndReversed) {
    std::vector<int> sorted = { 1, 2, 3, 4, 5 };
    insertionSort(sorted);
    EXPECT_EQ(sorted, sorted);
    std::vector<int> reversed = { 5, 4, 3, 2, 1 };
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    insertionSort(reversed);
    EXPECT_EQ(reversed, expected);
}
