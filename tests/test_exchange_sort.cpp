#include "pch.h"
#include "gtest/gtest.h"
#include "exchange_sort.h"
#include <vector>

TEST(ExchangeSortTest, NormalCaseInt) {
    std::vector<int> arr = { 5, 10, 18, 0, 2, 7, 11, 14 };
    std::vector<int> expected = { 0, 2, 5, 7, 10, 11, 14, 18 };
    exchangeSort(arr);
    EXPECT_EQ(arr, expected);
}
TEST(ExchangeSortTest, NormalCaseDouble) {
    std::vector<double> arr = { 3.14, 1.59, 2.65, 0.58 };
    std::vector<double> expected = { 0.58, 1.59, 2.65, 3.14 };
    exchangeSort(arr);
    EXPECT_EQ(arr, expected);
}
