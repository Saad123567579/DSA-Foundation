//check isomorphic you need to see if they have a one to one mapping 
// #include<iostream>
// #include<vector>
// #include<string>

// using namespace std;

// bool isIsomorphic(string s1,string s2){
//   if(s1.length() != s2.length()) return false;
//   vector<int> arr1 (26,-1);
//   vector<int> arr2 (26,-1);
//   for(int i=0;i<s1.length();i++){
//     arr1[ s1[i]-'a'] = i;
//     arr2[ s2[i]-'a'] = i;
//   }
//   for(int i=0;i<s1.length();i++){
//     if( arr1[s1[i]-'a'] != arr2[s2[i]-'a'] ) return false ;
//   }
//   return true;
// }
// int main(){
//   string s1 = "bbaa";
//   string s2 = "aabb";
//   cout<<isIsomorphic(s1,s2);
// }