//frog jump problem move from start to end with minmum cost 
// #include<iostream>
// #include<vector>
// #include <cmath>

// using namespace std;

// int f(vector<int> arr,int start,int end){
//   if(start==end){return 0;}
//   if(start==end - 1 ) {return arr[start+1] - arr[start];}
//   if(arr[start+1]-arr[start]>arr[start+2]-arr[start]){
//     int x = arr[start+2]-arr[start];
//     return abs(x) + f(arr,start+2,end);
//   }
//   if(arr[start+2]-arr[start]>arr[start+1]-arr[start]){
//     int x = arr[start+1]-arr[start];
//     return abs(x) + f(arr,start+1,end);
//   }
// }

// int main(){
//   vector<int> arr =  {10,10};
//   cout<<f(arr,0,arr.size()-1);
// }