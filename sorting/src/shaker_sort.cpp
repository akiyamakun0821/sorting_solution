#include <vector>
#include <algorithm>

template <typename T>
void shakerSort(std::vector<T>& arr) {
    if (arr.empty()) return;

    int left = 0;
    int right = static_cast<int>(arr.size()) - 1;
    bool swapped = true;

    while (left < right && swapped) {
        swapped = false;

        for (int i = left; i < right; ++i) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
        --right;

        for (int i = right - 1; i >= left; --i) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
        ++left;
    }
}
