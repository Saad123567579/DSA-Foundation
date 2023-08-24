//given an array you need to bring all zeros to the end without disturbing the original nonzero elements 

// #include<iostream>
// #include<vector>
// using namespace std ;
// int main(){
//   vector<int> arr = {3,0,2,0,1,5};
//   cout<<"Before:\n";
//   for(int x:arr) cout<<x<<" ";
//   int x = 0;
//   for(int i=0;i<arr.size();i++){
//     if(arr[i] == 0 ) continue;
//     int y = arr[i];
//     arr[i] = arr[x];
//     arr[x] = y;
//     x++;
//   }
//   cout<<"\nAfter:\n";
//   for(int x:arr) cout<<x<<" ";
// }