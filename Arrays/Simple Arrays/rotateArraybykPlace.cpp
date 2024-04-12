// Given an array 'arr' with 'n' elements, the task is to rotate the array to the left by 'k' steps, where 'k' is non-negative.
// Example:
// 'arr '= [1,2,3,4,5]
// 'k' = 1  rotated array = [2,3,4,5,1]
// 'k' = 2  rotated array = [3,4,5,1,2]
// 'k' = 3  rotated array = [4,5,1,2,3] and so on.
// Expected Time Complexity:
// O(n), where ‘n’ is the size of the array ‘arr’ and ‘k’ is the number of rotations.
// Constraints:
// 1 <= 'n' <= 10^3
// 1 <= 'arr'[i] <= 10^9
// 1 <= 'k' < 'n'
#include<vector>
#include<iostream>
using namespace std;
void reverse(vector<int>&arr, int s, int e){
    while(s <= e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
int main(){
    vector<int>arr;
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    cout<<"Enter the Elements of Array: ";
    for(int i = 0; i < n; i++){
        int data;
        cin>>data;
        arr.push_back(data);
    }
    int k;
    cout<<"Enter the Place to Rotate: ";
    cin>>k;
    // Left Rotation
    cout<<"Rotated Array is: ";
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    reverse(arr, 0, n - 1);
    cout<<"The Rotated Array is: ";
    for(auto i : arr){
        cout<<i<<" ";
    } 
    cout<<endl;
    // For Right Rotation
    // reverse(arr, 0, n - 1);
    // reverse(arr, 0, k - 1);
    // reverse(arr, k, n - 1);
    return 0;
}