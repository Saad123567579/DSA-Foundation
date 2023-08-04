//rotate a matrix by 90degrees clockwise using the same array
//first find transpose then reverse the rows



// #include <algorithm>
// #include<iostream>
// #include<vector>
// using namespace std;
// void rotate(vector<vector<int>> &arr){ int temp;
//   for (int i = 0; i < arr.size(); i++) {
//         for (int j = 0; j <= i; j++) {
//             swap(arr[i][j],arr[j][i]);
//         }
//     }
//   for(int i=0;i<arr.size();i++){
//     reverse(arr[i].begin(),arr[i].end());
//   }
  
// }
// int main(){
//   vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
//   rotate(arr);
//   for(int i=0;i<arr.size();i++){
//     for(int j=0;j<arr[i].size();j++){
//       cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//   }
// }