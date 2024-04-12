#include<iostream>
#include<limits.h>
using namespace std;
int secondMinimumElement(int arr[], int size, int minm){
    int sminm = INT_MAX;
    for(int i = 0; i < size; i++){
        if(sminm > arr[i] && arr[i] != minm){
            sminm = arr[i];
        }
    }
    return (sminm == INT_MIN)?-1:sminm;
}
int main(){
    // ------------Testcase input arrays---------------
    // int arr[] = {9,8,7,6,5,4,3,2,1};
    // int arr[] = {0,0,0,0};
    int arr[] = {0,1};


    int size = sizeof(arr)/sizeof(arr[0]);
    
    int minm = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] < minm){
            minm = arr[i];
        }
    }

    int sminm = secondMinimumElement(arr, size, minm);
    cout<<"The Second Minimum number present in the array is: "<<sminm<<endl;
    return 0;
}