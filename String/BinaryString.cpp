//use window sliding to find max number of substring with 1s and u can at most swap 2 0s


// #include<iostream>
// #include<string>
// using namespace std;
// int slidingWindow(string str,int k){
//   int start =0;
//   int end =0;
//   int max =0;
//   int zeros = 0;
//   while(end<str.size()){
//     if(str[end]=='0') zeros++;
//     if(zeros>k){
//       if(str[start]=='0') zeros--;
//       start++;
     
//     } 
//     if(end-start+1>max) max = (end-start+1);
//     end++;
//   }
//   return max;
// }


// int main(){
//   string n = "0001101011";
//   cout<<slidingWindow(n,2);
// }