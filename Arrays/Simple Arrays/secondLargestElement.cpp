#include<iostream>
#include<limits.h>
using namespace std;
int secondLargestElement(int arr[], int size, int maxm){
    int smaxm = INT_MIN;
    for(int i = 0; i < size; i++){
        if(smaxm < arr[i] && arr[i] != maxm){
            smaxm = arr[i];
        }
    }
    return (smaxm == INT_MIN)?-1:smaxm;
}
int main(){
    // ------------Testcase input arrays---------------
    // int arr[] = {9,8,7,6,5,4,3,2,1};
    // int arr[] = {0,0,0,0};
    int arr[] = {0,1};


    int size = sizeof(arr)/sizeof(arr[0]);
    
    int maxm = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > maxm){
            maxm = arr[i];
        }
    }

    int smaxm = secondLargestElement(arr, size, maxm);
    cout<<"The Second maximum number present in the array is: "<<smaxm<<endl;
    return 0;
}