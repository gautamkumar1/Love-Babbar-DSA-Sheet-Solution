#include<iostream>
using namespace std;
// Approach 1 : simply sorted the array 

// Approach 2 : Using two pointer

void sort012(int*arr,int n){
    int low=0;
    int high=n-1;
    int mid=0;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[high],arr[mid]);
            high--;
        }
    }
}

int main(){
    int arr[] = {0 ,2 ,1 ,2 ,0};
    int n = 5;
    sort012(arr,n);
    for(int val: arr){
        cout<<val<<" ";
    }
    return 0;
}