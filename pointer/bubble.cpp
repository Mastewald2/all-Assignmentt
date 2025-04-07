#include <iostream>
 using namespace std;
 

 void bubbleSort(int* arr, int size) {
     for (int i = 0; i < size - 1; i++) {
         for (int j = 0; j < size - i - 1; j++) {
             
             if (*(arr + j) > *(arr + j + 1)) {
                 
                 swap(*(arr + j), *(arr + j + 1));
             }
         }
     }
 }
 

 void printArray(int* arr, int size) {
     for (int i = 0; i < size; i++) {
         cout << *(arr + i) << " ";
     }
     cout << endl;
 }
 

 int main() {
     const int size = 10;
     int arr[size] = {64, 34, 25, 12, 22, 11, 90, 5, 3, 1};
 
     cout << "Original Array: ";
     printArray(arr, size);
 
     bubbleSort(arr, size);
 
     cout << "Sorted Array (Bubble Sort): ";
     printArray(arr, size);
 
     return 0;
 }