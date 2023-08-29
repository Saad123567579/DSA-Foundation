//given an array of strings you need to find the longest common prefix string 
// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// string commonPrefix(vector<string> str){
//   if (str.empty()) return "";
//   string result = str[0];
//   for(int i=1;i<str.size();i++){
//     int j=0;
//     while(j<result.length() && j<str[i].length()){
//       if(result[j] != str[i][j]) break;
//       if(result[j] == str[i][j]) j++;
//     }
//     result = result.substr(0,j);
//   }
//   return result;
// }
// int main(){
//   vector<string>str = {"ant","anti"};
//   cout<<commonPrefix(str);
// }