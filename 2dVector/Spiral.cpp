//input nxm matrix and print it in spiral order clockwise

// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
//     int rows = arr.size();
//     int cols = arr[0].size();
//     int top = 0;
//     int bottom = rows - 1;
//     int left = 0;
//     int right = cols - 1;

//     while (top <= bottom && left <= right) {
//         for (int i = left; i <= right; i++) {
//             cout << arr[top][i] << " ";
//         }
//         top++;

//         for (int i = top; i <= bottom; i++) {
//             cout << arr[i][right] << " ";
//         }
//         right--;

  
//             for (int i = right; i >= left; i--) {
//                 cout << arr[bottom][i] << " ";
//             }
//             bottom--;
      
//             for (int i = bottom; i >= top; i--) {
//                 cout << arr[i][left] << " ";
//             }
//             left++;
        
//     }

//     return 0;
// }




  
  
