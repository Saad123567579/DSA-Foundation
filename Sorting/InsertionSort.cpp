//take 2 portions where you have sorted and unsorted parts then place the elements in the sorted according to their place 
// #include<iostream>
// #include<vector>
//Time Complexity 
//O(n^2) worst case 
//O(n) best case
// using namespace std ;

// int main(){
//   vector<int> arr = {2,4,1,7,3};
//   cout<<"Before\n";
//   for(int i:arr) cout<<i<<" ";
  
//   for(int i=1;i<arr.size();i++){
//     int current = arr[i];
//     int j = i - 1;
//     while(j>=0 && arr[j]>current){
//       arr[j+1] = arr[j];
//       j--;
//     }
//     arr[j+1] = current;
    
//   }
//    cout<<"\nAfter\n";
//   for(int i:arr) cout<<i<<" ";
// }