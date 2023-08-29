//decode the string as shown below 
// 3[b2[ca]] will be bcacabcacabcacabcaca

// #include<iostream>
// #include<string>
// using namespace std;
// string decode(string str){
//   int i=str.size()-1;
//   while(i>=0){
//     if(int(str[i]) >= 48 && int(str[i])<=57 ){
      
//       int x = str[i] - '0';
//       string temp = "";
//       int j=i+2;
//       while(j<str.size()){
//         if(str[j]==']') break;
//         temp += str[j];
//         j++;
//       }
//       string s = "";
//       for(int k=0;k<x;k++){
//         s += temp;
//       }
//       str.erase(i,j);
//       str.insert(i,s);
      
//     }
//     i--;
//   }
//   return str;
// }
// int main(){
//   string x = "1[a2[b3[c]]]";
//   cout<<decode(x);
// }