// You have been given an array ‘a’ of ‘n’ non-negative integers.You have to check whether the given array is sorted in the non-decreasing order or not.
// Your task is to return 1 if the given array is sorted. Else, return 0.
// Example :
// Input: ‘n’ = 5, ‘a’ = [1, 2, 3, 4, 5]
// Output: 1
// The given array is sorted in non-decreasing order; hence the answer will be 1.
// Expected Time Complexity:
// O(n), Where ‘n’ is the size of an input array ‘a’.
// Constraints:
// 1 ≤ 'n' ≤ 5*10^6
// 0 ≤ 'a'[i] ≤ 10^9
#include<iostream>
using namespace std;
int main(){
    // ------------Testcase input arrays---------------
    // int arr[] = {9,8,7,6,5,4,3,2,1};
    // int arr[] = {0,0,0,0};
    // int arr[] = {0,1};
    int arr[] = {1,2,3,4,5};
    // int arr[] = {1};
    // int arr[] = {1,2,4,3,5};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    bool ans = true;
    for(int i = 0; i < size - 1; i++){
        if(arr[i] > arr[i + 1]){
            ans = false;
            break;
        }
    }
    cout<<"Is the array Sorted : "<<((ans)?"YES":"NO")<<endl;
    return 0;
}