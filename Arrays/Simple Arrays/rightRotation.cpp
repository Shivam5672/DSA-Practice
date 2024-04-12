// Given an array 'arr' containing 'n' elements, rotate this array left once and return it.
// Rotating the array right by one means shifting all elements by one place to the right and moving the last element to the first position in the array.
// Example:
// Input: 'a' = 5, 'arr' = [1, 2, 3, 4, 5]
// Output: [5, 1, 2, 3, 4]
// Expected time complexity:
// O( n ), Where ‘n’ is the size of an input array ‘arr’.
// Constraints :
// 1 <= 'n' <= 10^5
// 1 <= 'arr[i] <= 10^9
// Time Limit: 1 sec
#include<iostream>
#include<vector>
using namespace std;
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
    int temp = arr[n - 1];
    for(int i = n - 2; i >= 0; i--){
        arr[i + 1] = arr[i];
    }
    arr[0] = temp;
    cout<<"The Rotated Array is: ";
    for(auto i : arr){
        cout<<i<<" ";
    } 
    cout<<endl;
    return 0;
}