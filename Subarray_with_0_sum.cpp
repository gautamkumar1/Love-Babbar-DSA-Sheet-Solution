#include<bits/stdc++.h>
using namespace std;
// Brute Force Approach 
// T(n): O(n^2)
// bool isZeroSum(int*arr,int n){
//     for(int i=0; i<n; i++){
//         int sum=0;
//         for(int j=i; j<n; j++){
//             sum+=arr[j];
//             if(sum==0)
//                 return 1;
//         }
//     }
//     return 0;
// }

// Optimal Solution using set data structre 
// T(n) : O(n) and S(n): O(n)

bool isZeroSum(int*arr,int n){
    unordered_set<int> st;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        st.insert(sum);
        // Calulating prefix sum
        sum+=arr[i];
        // finding duplicate element 
        if(st.find(sum)!=st.end()){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[] = {4 ,2 ,-3 ,1 ,6};
    int n = 5;
    if(isZeroSum(arr,n)){
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}