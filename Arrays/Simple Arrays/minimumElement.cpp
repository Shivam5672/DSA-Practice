#include<iostream>
using namespace std;
int main(){
    // ------------Testcase input arrays---------------
    int arr[] = {9,8,7,6,5,4,3,2,1};
    // int arr[] = {0,0,0,0};
    // int arr[] = {0,1};


    int size = sizeof(arr)/sizeof(arr[0]);
    
    int minm = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] < minm){
            minm = arr[i];
        }
    }
    cout<<"The Minimum number present in the array is: "<<minm<<endl;
    return 0;
}