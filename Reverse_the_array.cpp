#include<iostream>
using namespace std;
// T(n) : O(n) and S(n) : O(1)
void reverse(int*arr,int n){
    int low = 0;
    int high = n-1;
    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    reverse(arr,n);
    for(int val : arr){
        cout<<val<<" ";
    }
    return 0;
}