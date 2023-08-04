//pascal triangle
// one approach is to find combinations and then print the triangle but its time complexity will be very high
//below is the second approach of 2 arrays which has a very low time complexity

// #include<iostream>
// #include<vector>
//  using namespace std;
// vector<vector<int>> pascal(int x){
//   vector<vector<int>> pascal(x);
//   for(int i=0;i<x;i++){
//     pascal[i].resize(i+1);
//     for(int j=0;j<=i;j++){
//       if(j==0 || j==i){ pascal[i][j] = 1;continue; }
//       pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
//     }
//   }
//   return pascal;
// }
// int main(){
//   int x = 10;
//   vector<vector<int>> triangle = pascal(x);
//   for(int i=0;i<x;i++){
//     for(int j=0;j<=i;j++){
//       cout<<triangle[i][j]<<" ";
//     }
//     cout<<endl;
//   }
  
// }