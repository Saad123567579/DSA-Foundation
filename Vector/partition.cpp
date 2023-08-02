//check if you can divide an array in to 2 parts such that their sum is equal


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){ int total_sum = 0;
//            int prefix_sum ;
//            int suffix_sum;
//            int flag=0;
//   vector<int> arr = {6,2,4,3,1};
//   for(int x:arr){total_sum += x;}
  
//   for(int i=0;i<arr.size();i++){
    
//     prefix_sum=0;suffix_sum=0;
//     for(int j=0;j<=i;j++){
//       prefix_sum += arr[j];
//     }
//     suffix_sum = total_sum - prefix_sum;
//     if(prefix_sum == suffix_sum){ flag=1;
//       cout<<"The array be can partioned at index "<< i <<" with the sum being "<<prefix_sum;
//     }
//     else {continue;}
    
//   }
//   if(flag==0){cout<<"Sorry the array can not be partioned ";}
  
//   return 0;
// }