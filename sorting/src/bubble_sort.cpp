#include <vector>
#include <algorithm>

template <typename T>
void bubbleSort(std::vector<T>& arr) {
    if (arr.empty()) return;
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        for (size_t j = 0; j < arr.size() - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}
