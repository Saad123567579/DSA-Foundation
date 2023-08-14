//given 2 strings u need to returns true or false if they are anagram or not 


// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;

// bool isAnagram(string s1,string s2){
//   if(s1.length() != s2.length()) return false;
//   vector<int> count1(26,0);
//   vector<int> count2(26,0);
//   for(int i=0;i<s1.size();i++){
//     int i1 = s1[i];
//     int i2 = s2[i];
//     count1[i1-97] += 1;
//     count2[i2-97] += 1;
//   }
//   for(int i=0;i<count1.size();i++){
//     if(count1[i] != count2[i]) return false;
//   } 
//   return true;
// }
// int main(){
//   string s1 = "book";
//   string s2 = "kob";
//   cout<<isAnagram(s1,s2);
// }