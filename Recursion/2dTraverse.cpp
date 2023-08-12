//given a 2d array find the total number of paths from traversing from start to the end u can move down and right only 


// #include<iostream>
// #include<vector>
// using namespace std ;
// int f(vector<vector<int>> arr,int crows,int ccols,int rows,int cols){
//   if(crows==rows || ccols==cols) return 0;
//   if(crows==rows-1 && ccols==cols-1) return 1;
//   return f(arr,crows+1,ccols,rows,cols) + f(arr,crows,ccols+1,rows,cols);
// }

// int main(){
//   vector<vector<int>> arr(3,vector<int>(3,0));
//   cout<<f(arr,0,0,arr.size(),arr[0].size());
// }