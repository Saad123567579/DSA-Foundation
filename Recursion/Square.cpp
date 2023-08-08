//given p and q find p raise to power q 


// #include <iostream>
// using namespace std;
// //best approach
// int f(int p , int q){
//   if(q==0) return 1;
//   if(q%2==0){
//     int result =  f(p,q/2);
//   return result * result;
//   }
//   else {
//     int result =  f(p,q/2);
//   return p * result * result;
//   }
// }

// int main(){
//   cout<<f(2,7);
// }








// int f(int p , int q){
//   if(q==0) return 1;
//   return f(p,q-1) * p;
// }

// int main(){
//   cout<<f(3,4);
// }




