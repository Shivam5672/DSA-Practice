// You are given a sorted integer array 'arr' of size 'n'.
// You need to remove the duplicates from the array such that each element appears only once.
// Return the length of this new array.
// Note:
// Do not allocate extra space for another array. You need to do this by modifying the given input array in place with O(1) extra memory. 
// For example:
// 'n' = 5, 'arr' = [1 2 2 2 3].
// The new array will be [1 2 3].
// So our answer is 3.
// Constraints :
// 1 <= 'n' <= 10^6
// -10^9 <= 'arr[i]' <=10^9
// Where ‘arr[i]’ is the value of elements of the array.
// Time limit: 1 sec

// 1 - Hashmap - O(n)
// 2 - Double for Loop - O(n2)
// 3 - Single For Loop - O(n)


#include<iostream>
#include<vector>
#include<map>
using namespace std;

int removeDuplicate1(vector<int>&arr){
    map<int, int>mp;
    for(int i = 0; i < arr.size(); i++){
        if(mp.find(arr[i]) == mp.end()){
            mp[arr[i]] = 1;
        }
        else{
            mp[arr[i]]++;
        }
    }
    arr.clear();
    map<int, int>::iterator it= mp.begin();
    while(it != mp.end()){
        arr.push_back(it->first);
        it++;
    }
    return arr.size();
}
int removeDuplicate2(vector<int>&arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(arr[i] == -1){
				break;
			}
			if(arr[i] == arr[j]){
				arr[j] = -1;
			}
		}
	}
	for(int i = 0; i < arr.size(); i++){
		if(arr[i] == -1){
			arr.erase(arr.begin() + i);
			i = i - 1;
		}
	}
    return arr.size();
}
int removeDuplicate3(vector<int>&arr){
    int n = arr.size();
    int j = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] != arr[i + 1]){
			arr[j++] = arr[i];
		}
	}
	arr[j] = arr[n - 1];

	for(int i = j; i < n; i++){
		arr.pop_back();
	}
	
	return arr.size();
}

int main(){
    // ------------Testcase input arrays---------------
    // int arr[] = {9,8,7,6,5,4,3,2,1};
    // int arr[] = {0,0,0,0};
    // int arr[] = {0,1};
    // int arr[] = {1,2,3,4,5};
    // int arr[] = {1};
    // int arr[] = {1,2,4,3,5};
    vector<int>arr = {1,2,2,3,3,3,4,4,5};
    // int newSize = removeDuplicate1(arr);
    // int newSize = removeDuplicate2(arr);
    int newSize = removeDuplicate3(arr);

    cout<<"The Element of modified Array is: ";
    for(int i = 0; i < newSize; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}