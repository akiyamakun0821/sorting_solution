#include <vector>
#include <algorithm>

template <typename T>
void exchangeSort(std::vector<T>& arr) {
    if (arr.empty()) return;
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        for (size_t j = i + 1; j < arr.size(); ++j) {
            if (arr[i] > arr[j]) {
                std::swap(arr[i], arr[j]);
            }
        }
    }
}
