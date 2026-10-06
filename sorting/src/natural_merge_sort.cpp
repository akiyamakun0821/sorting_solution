#include <vector>
#include <fstream>
#include <string>
#include "../include/two_phase_merge_sort.h"

template <typename T>
void naturalMergeSort(std::vector<T>& arr) {
    if (arr.empty()) return;

    std::string fNat = "temp_natural.dat";
    std::ofstream outNat(fNat, std::ios::binary);
    for (const auto& val : arr) {
        outNat.write(reinterpret_cast<const char*>(&val), sizeof(T));
    }
    outNat.close();

    twoPhaseMergeSort(arr);

    std::remove(fNat.c_str());
}
