#include "pch.h"
#include "gtest/gtest.h"
#include "binary_insertion_sort.h"
#include <vector>

TEST(BinaryInsertionSortTest, PersonalArrayInt) {
    std::vector<int> arr = { 5, 10, 18, 0, 2, 7, 11, 14 };
    std::vector<int> expected = { 0, 2, 5, 7, 10, 11, 14, 18 };
    binaryInsertionSort(arr);
    EXPECT_EQ(arr, expected);
}

TEST(BinaryInsertionSortTest, NormalCaseDouble) {
    std::vector<double> arr = { 5.5, 10.1, 1.1, 0.0, 2.2 };
    std::vector<double> expected = { 0.0, 1.1, 2.2, 5.5, 10.1 };
    binaryInsertionSort(arr);
    EXPECT_EQ(arr, expected);
}

TEST(BinaryInsertionSortTest, BoundaryCases) {
    std::vector<int> empty_arr = {};
    binaryInsertionSort(empty_arr);
    EXPECT_TRUE(empty_arr.empty());
}

TEST(BinaryInsertionSortTest, ReversedArray) {
    std::vector<int> arr = { 5, 4, 3, 2, 1 };
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    binaryInsertionSort(arr);
    EXPECT_EQ(arr, expected);
}
