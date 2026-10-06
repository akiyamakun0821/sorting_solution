#include "pch.h"
#include "gtest/gtest.h"
#include "natural_merge_sort.h"
#include <vector>

TEST(NaturalMergeSortTest, PersonalArrayInt) {
    std::vector<int> arr = { 5, 10, 18, 0, 2, 7, 11, 14 };
    std::vector<int> expected = { 0, 2, 5, 7, 10, 11, 14, 18 };
    naturalMergeSort(arr);
    EXPECT_EQ(arr, expected);
}
TEST(NaturalMergeSortTest, EmptyVector) {
    std::vector<int> arr = {};
    naturalMergeSort(arr);
    EXPECT_TRUE(arr.empty());
}
TEST(NaturalMergeSortTest, ReversedArray) {
    std::vector<int> arr = { 3, 2, 1 };
    std::vector<int> expected = { 1, 2, 3 };
    naturalMergeSort(arr);
    EXPECT_EQ(arr, expected);
}
