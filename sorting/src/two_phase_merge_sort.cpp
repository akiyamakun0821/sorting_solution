#include <vector>
#include <fstream>
#include <string>

template <typename T>
void twoPhaseMergeSort(std::vector<T>& arr) {
    if (arr.empty()) return;

    std::string masterFile = "temp_master.dat";
    std::ofstream outFile(masterFile, std::ios::binary);
    for (const auto& val : arr) {
        outFile.write(reinterpret_cast<const char*>(&val), sizeof(T));
    }
    outFile.close();

    size_t n = arr.size();
    std::ifstream inFile(masterFile, std::ios::binary);
    std::vector<T> tempGrid(n);
    size_t idx = 0;
    while (idx < n && inFile.read(reinterpret_cast<char*>(&tempGrid[idx]), sizeof(T))) {
        idx++;
    }
    inFile.close();

 
    for (size_t size = 1; size < n; size *= 2) {
        for (size_t left = 0; left < n; left += 2 * size) {
            size_t mid = left + size;
            size_t right = left + 2 * size;

            if (mid > n) mid = n;
            if (right > n) right = n;

            if (left >= mid) continue;

            std::vector<T> merged;
            size_t i = left, j = mid;
            while (i < mid && j < right) {
                if (tempGrid[i] <= tempGrid[j]) {
                    merged.push_back(tempGrid[i++]);
                }
                else {
                    merged.push_back(tempGrid[j++]);
                }
            }
            while (i < mid) merged.push_back(tempGrid[i++]);
            while (j < right) merged.push_back(tempGrid[j++]);

            for (size_t k = 0; k < merged.size(); ++k) {
                if (left + k < n) { // 安全対策の境界チェック
                    tempGrid[left + k] = merged[k];
                }
            }
        }
    }

    std::ofstream outSorted(masterFile, std::ios::binary | std::ios::trunc);
    for (const auto& val : tempGrid) {
        outSorted.write(reinterpret_cast<const char*>(&val), sizeof(T));
    }
    outSorted.close();

    std::ifstream inSorted(masterFile, std::ios::binary);
    for (size_t i = 0; i < n; ++i) {
        inSorted.read(reinterpret_cast<char*>(&arr[i]), sizeof(T));
    }
    inSorted.close();
    std::remove(masterFile.c_str());
}
