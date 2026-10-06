#include "pch.h"
#include "gtest/gtest.h"
#include "two_phase_merge_sort.h"
#include <vector>

TEST(TwoPhaseMergeSortTest, PersonalArrayInt) {
    std::vector<int> arr = { 5, 10, 18, 0, 2, 7, 11, 14 };
    std::vector<int> expected = { 0, 2, 5, 7, 10, 11, 14, 18 };
    twoPhaseMergeSort(arr);
    EXPECT_EQ(arr, expected);
}
TEST(TwoPhaseMergeSortTest, EmptyVector) {
    std::vector<int> arr = {};
    twoPhaseMergeSort(arr);
    EXPECT_TRUE(arr.empty());
}
TEST(TwoPhaseMergeSortTest, ReversedArray) {
    std::vector<int> arr = { 3, 2, 1 };
    std::vector<int> expected = { 1, 2, 3 };
    twoPhaseMergeSort(arr);
    EXPECT_EQ(arr, expected);
}
