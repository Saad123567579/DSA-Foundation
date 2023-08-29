//write a program to merge 2 sorted arrays 
// #include<iostream>
// #include<vector>
// using namespace std ;

// vector<int> mergeSorted(vector<int>arr1,vector<int>arr2){
//   int s1 = 0;
//   int s2 = 0;
//   int e1 = arr1.size();
//   int e2 = arr2.size();
//   vector<int> result;

//   while(s1<e1 && s2<e2){
//     if(arr1[s1]<arr2[s2]){
//       result.push_back(arr1[s1++]);
//     }
//     else{
//       result.push_back(arr2[s2++]);
//     }
//   }
//   while(s1<e1){
//    result.push_back(arr1[s1++]);
//   }
//   while(s2<e2){
//    result.push_back(arr2[s2++]);
//   }
//   return result;
  
  
// }

// int main(){
//   vector<int> arr1 = {5,8,10};
//   vector<int> arr2 = {2,7,8};
//   vector<int> result = mergeSorted(arr1,arr2);
//   for(int i:result) cout<<i<<" ";
// }