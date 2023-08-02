//given an array of integers return an array with all the even integers to the beginning and all the odd integers to the end 
//again use 2 pointer approach

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){ int temp;
//   vector<int> arr = {3,4};
//   int start = 0;
//   int end = arr.size() - 1;
//   while(start<=end){
//     if(arr[start]%2!=0 && arr[end]%2==0){
//       temp = arr[start];
//       arr[start] = arr[end];
//       arr[end] = temp;
//     }
//     if(arr[start]%2==0)start++;
//     if(arr[end]%2!=0) end --;
//   }
//   for(int x:arr){cout<<x;}
           
// }