//use quick sort to find kth smallest element in an array 
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

// int quickSort(vector<int> arr, int start, int end,int k) {
//     if (start < end) {
//       int pivot = getPivot(arr, start, end);
//       if(pivot==k-1) return arr[pivot];
//       if(pivot<k-1) return quickSort(arr,pivot+1,end,k);
//       if(pivot>k-1) return quickSort(arr, start, pivot - 1,k);
        
//     }
//    return -1;
// }

// int main() {
//     vector<int> arr = {3,5,2,1,4,7,8,6};
//     cout<<quickSort(arr, 0, arr.size() - 1,1);

    
//     return 0;
// }
