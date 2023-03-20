#include<bits/stdc++.h>
using namespace std;

int countOccurence(int*arr,int n,int k){
    unordered_map<int,int> mp;
    int mid = n/k;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    int cnt = 0;
    for(auto i:mp){
        if(i.second > mid){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int arr[] = {3,1,2,2,1,2,3,3};
    int n = 8;
    int k = 4;
    cout<<countOccurence(arr,n,k)<<endl;
    return 0;
}