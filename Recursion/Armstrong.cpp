//given a number use recursion to find if the number is armstrong or not

// #include <cmath>
// #include<iostream>
// using namespace std;
// int digits(int x,int y=0){
//   if(x<=10 && x>=0) { return ++y;  }
//     ++y;
//    return digits(x/10,y);}
// int f(int x,int y){
//   if(x<=9 && x>=0)  {return pow(x%10,y);}
//   return ( pow(x%10, y) + f(x/10,y) );}
// bool checkArmstrong(int x){
//   int num = f(x,digits(x));
//   if(num==x) return true;
//   else return false;
// }
// int main(){
//   int x = 150;
//   cout<<checkArmstrong(x);
// }