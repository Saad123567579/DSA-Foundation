//given an arry of 0 and 1 u need to sort that arry meaning that all the ones on the right side and all the 0s on the left side 
//using the 2 pointer approach

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){ int temp;
//   vector<int> arr = {1,0,1};
//   int start = 0;
//   int end = arr.size() - 1;
//   while(start<=end){
    
//     // if(arr[start]==arr[end]) continue;
//     if(arr[start]==1 && arr[end]==0){
//     temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;
//     }
//     if(arr[start]==0) start++;
//     if(arr[end]==1) end--;
   
    
//   }
//   for(int x:arr){
//     cout<<x;
//   }
  
// }
// 1 1 0 0 1 0 1 0 => 0 0 0 0 1 1 1 1

// 1 1 0 0 1 0 1 0
// 0 1 0 0 1 0 1 1
// 0 0 0 0 1 1 1 1  
  
  
  