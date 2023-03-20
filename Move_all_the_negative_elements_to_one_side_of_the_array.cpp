#include<iostream>
#include<vector>
using namespace std;

// Approach 1 : sort the array

// Approach 2 : using two pointer
vector<int> separateNegativeAndPositive(vector<int>&arr,int n){
    int start = 0;
    int end = 0;
    while(end < n){
        if(arr[end]<0){
            swap(arr[start],arr[end]);
            start++;
        }
        end++;
    }
    return arr;
}

int main(){
    vector<int> arr = {4,-1,8,-3,-9,4};
    int n = arr.size();
    vector<int> ans = separateNegativeAndPositive(arr,n);
    for(auto val : ans){
        cout<<val<<" ";
    }
    return 0;
}