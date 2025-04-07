#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& arr) {
    int n = arr.size();
    
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

    
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    std::vector<int> arr;
    int size, element;

    std::cout << "Enter number of elements: ";
    std::cin >> size;

    std::cout << "Enter elements:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> element;
        arr.push_back(element);
    }

    insertionSort(arr);

    std::cout << "Sorted array: ";
    for (const int& num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}