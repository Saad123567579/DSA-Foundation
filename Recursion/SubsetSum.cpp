//generate all the sum of the subsets in an array
// #include<iostream>
// #include<vector>
// using namespace std;
// void f(vector<int> arr,int start,int end,int sum){
//   if(start==end){cout<<sum<<" ";return;}
//   else{
//     f(arr,start+1,end,arr[start]+sum);
//     f(arr,start+1,end,sum);
//   }
// } 
// int main(){
//   vector<int> arr = {2,4,5};
//   f(arr,0,arr.size(),0);
// }