// Given an array 'arr' of 'n' non-negative integers, your task is to move all the zeros to the end of the array while keeping the non-zero elements at the start of the array in their original order. Return the modified array.
// Example :
// Input: ‘n’ = 5, ‘arr’ = [1, 2, 0, 0, 2, 3]
// Output: [1, 2, 2, 3, 0, 0]
// Expected time complexity:
//  The expected time complexity is O(n).
// Constraints:
// 1 ≤ n ≤ 10^6
// 0 ≤ arr[i] ≤ 10^9
// Time limit: 1 sec
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
    int count = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == 0)
        {
            arr.erase(arr.begin() + i);
            i = i - 1;
            count++;
        }
    }
    for(int i = 1; i <= count; i++){
        arr.push_back(0);
    }
    cout<<"The modified Array is: ";
    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}