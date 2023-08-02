//given a sorted array u need to return an array of their squares sorted in a ascending order 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//   vector<int> arr = {-10,-7,-3 ,1 ,3,6,7,10 ,12};
//   int start = 0;
//   int end = arr.size() - 1;
//   vector<int> arr1;
//   while(start<=end){
//     if(arr[start]*arr[start]>=arr[end]*arr[end]){arr1.push_back(arr[start]*arr[start]);start++;}
//     if(arr[end]*arr[end]>arr[start]*arr[start]){
//       arr1.push_back(arr[end]*arr[end]);end--;}
//   }
//   for(int x:arr1){cout<<" "<<x;}
// }