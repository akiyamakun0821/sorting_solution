#include <vector>
#include <fstream>
#include <string>
#include "../include/two_phase_merge_sort.h"

template <typename T>
void onePhaseMergeSort(std::vector<T>& arr) {
    if (arr.empty()) return;

    std::string f1 = "temp_f1.dat";
    std::ofstream outF1(f1, std::ios::binary);
    for (const auto& val : arr) {
        outF1.write(reinterpret_cast<const char*>(&val), sizeof(T));
    }
    outF1.close();

    twoPhaseMergeSort(arr);

    std::remove(f1.c_str());
}
