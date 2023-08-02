//find a unique number in a given array where all the elements are being repeated twice with one value being unique u have to find that number



// #include <iostream>
// #include <vector>
// using namespace std; 
// int main(){
//   int equation = 0;
//   vector<int> arr = {2,3,1,3,2,5,1};
//   for(int x:arr){
//     equation ^= x;
//   }
//   cout<<equation;
// }







// another approach but very time consuming one
// #include <iostream>
// #include <vector>
// using namespace std; 
// int main(){
//   int equation = 0;
//   int flag;
//   vector<int> arr = {2,3,1,3,2,5,1};
//   for(int i=0;i<arr.size();i++){ flag=0;
//     for(int j=0;j<arr.size();j++){
//       if(i==j) continue;
//       if(arr[i]==arr[j]){flag=1;continue;}
//     }
//     if(flag==0){cout<<arr[i];break;}
//   }
// }