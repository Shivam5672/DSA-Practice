#include<iostream>
#include<vector>
using namespace std;

int linearSearchIterative(vector<int>arr, int n, int target){
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int linearSearchRecursive(vector<int>&arr, int n, int target){
    if(n == -1){
        return -1;
    }
    if(arr[n] == target){
        return n;
    }
    int ans = linearSearchRecursive(arr, n-1, target);
    return ans;
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
    int target;
    cout<<"Enter the target to Search: ";
    cin>>target;
    int index = linearSearchIterative(arr, n, target);
    if(index == -1){
        cout<<"Element not found."<<endl;
    }
    else{
        cout<<"Element found at index: "<<index<<endl;
    }
    int index2 = linearSearchRecursive(arr, n - 1, target);
    if(index2 == -1){
        cout<<"Element not found."<<endl;
    }
    else{
        cout<<"Element found at index: "<<index2<<endl;
    }
    return 0;
}