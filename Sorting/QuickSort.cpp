//pivot element is at the last


// #include <iostream>
// #include <vector>
// using namespace std;

// int getPivot(vector<int>& arr, int start, int end) {
//     int pivotValue = arr[end];
//     int i = start - 1;

//     for (int j = start; j <= end - 1; j++) {
//         if (arr[j] < pivotValue) {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }

//     swap(arr[i + 1], arr[end]);
//     return i + 1;
// }

// void quickSort(vector<int>& arr, int start, int end) {
//     if (start < end) {
//         int pivot = getPivot(arr, start, end);
//         quickSort(arr, start, pivot - 1);
//         quickSort(arr, pivot + 1, end);
//     }
// }

// int main() {
//     vector<int> arr = {20, 12, 35, 16, 18, 30};
//     quickSort(arr, 0, arr.size() - 1);

//     for (int i : arr) {
//         cout << i << " ";
//     }

//     return 0;
// }
