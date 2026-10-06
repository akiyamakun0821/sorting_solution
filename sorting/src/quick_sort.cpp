#include <vector>
#include <algorithm>


template <typename T>
void quickSortHelper(std::vector<T>& arr, int low, int high) {
    if (low >= high) return;

    T pivot = arr[high]; 
    int i = low - 1;

    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            ++i;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    int pivot_idx = i + 1;

    quickSortHelper(arr, low, pivot_idx - 1);
    quickSortHelper(arr, pivot_idx + 1, high);
}

template <typename T>
void quickSort(std::vector<T>& arr) {
    if (arr.empty()) return;
    quickSortHelper(arr, 0, static_cast<int>(arr.size()) - 1);
}
