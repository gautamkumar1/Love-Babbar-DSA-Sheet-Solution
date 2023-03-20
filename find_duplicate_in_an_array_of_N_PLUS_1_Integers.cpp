#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
// Approach 1 : Brute force using 2 loop so time complexity is O(n^2)
// Approach 2 : Using unordered_map so time complexity is O(n) but space complexity is O(n)

// Code Approach 2:

int findDuplicate(vector<int>&arr){
    int n = arr.size();
    unordered_map<int,int> mp;
    for(auto val : arr){
        mp[val]++;
    }
    for(int i=0; i<n; i++){
        if(mp.at(arr[i])==2){
            return arr[i];
        }
    }
    return -1;
}
// Approach 3 : Optimal Solution Using Binary Search 

// Code Approach 3

int getCount(vector<int>&arr,int mid){
    int cnt = 0;
    for(auto val : arr){
        if(mid <= val) cnt++;
    }
    return cnt;
}
int findDuplicate_BS(vector<int>&arr){
    
}
int main(){
    vector<int> arr = {1,3,4,2,2};
    cout<<findDuplicate(arr)<<endl;
    return 0;
}