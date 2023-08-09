//use recursion to find whether a number is palindrome or not

// ***************





// #include<iostream>
// using namespace std;

// bool func(int x, int *y) {
//     if (x <= 9 && x >= 0) {
//         return (x == (*y % 10));
//     }
    
//     bool result = func(x / 10, y) && (x % 10 == (*y) % 10);
//     (*y)/= 10;
    
//     return result;
// }

// int main() {
//     int x = 12621;
//     int y = x;
//     cout << func(x, &y);
  
//     return 0;
// }

















// #include<iostream>
// using namespace std;

// bool func(int x, int *y) {
//     if(x<=9 && x>=0) return (x==(*y%10));
//     bool result = func(x/10,y) && (x%10==*y%10);
//     *y /=10;
    
//     return result;
  
// }


// int main(){
//   int x = 1221;
//   int y = x;
//   cout<<func(x,&y);
  
// }