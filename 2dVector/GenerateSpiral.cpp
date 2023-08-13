// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n = 3;
//     int x = 1;
//     vector<vector<int>> arr(n, vector<int>(n, 0));

//     int rows = arr.size();
//     int cols = arr[0].size();
//     int top = 0;
//     int bottom = rows - 1;
//     int left = 0;
//     int right = cols - 1;

//     while (top <= bottom && left <= right) {
//         for (int i = left; i <= right; i++) {
//             arr[top][i] = x++;
//         }
//         top++;

//         for (int i = top; i <= bottom; i++) {
//             arr[i][right] = x++;
//         }
//         right--;

        
//             for (int i = right; i >= left; i--) {
//                 arr[bottom][i] = x++;
//             }
//             bottom--;
        

        
//             for (int i = bottom; i >= top; i--) {
//                 arr[i][left] = x++;
//             }
//             left++;
        
//     }

//     for (int k = 0; k < arr.size(); k++) {
//         for (int p = 0; p < arr[0].size(); p++) {
//             cout << arr[k][p] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
