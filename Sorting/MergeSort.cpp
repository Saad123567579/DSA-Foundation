// #include<iostream>
// #include<vector>
// using namespace std;
// //Time Complexity
// // O(nlogn)
// //Space Complexity 
// // O(n)
// vector<int> mergeArrays(vector<int>arr1,vector<int>arr2) { 
//   vector<int> result;
//   int l1 = arr1.size();
//   int l2 = arr2.size();
//   int s1 = 0;
//   int s2 = 0;
//   while(s1<l1 &&  s2<l2){
//     if(arr1[s1]>arr2[s2]){
//       result.push_back(arr2[s2++]);
//     }
//     else{
//       result.push_back(arr1[s1++]);
//     }
//   }
//   while(s1<l1){ result.push_back(arr1[s1++]);}
//   while(s2<l2){ result.push_back(arr2[s2++]);}
//   return result;

// }

// vector<int> MergeSort(vector<int> arr,int start,int end){
//   if (start >= end) {
//         vector<int> base;
//         base.push_back(arr[start]);
//         return base;
//     }
//   int mid = (start+end)/2;
//   vector<int> arr1 = MergeSort(arr,start,mid);
//   vector<int> arr2 = MergeSort(arr,mid+1,end);
//   return mergeArrays(arr1,arr2);
// }

// int main(){
//   vector<int> arr = {9, 2, 4, 6, 3, 8, 1, 7};
//     vector<int> sortedArr = MergeSort(arr, 0, arr.size() - 1);
    
//     // Printing the sorted array
//     for (int num : sortedArr) {
//         cout << num << " ";
//     }
    
//     return 0;
// }


