#include<iostream>
using namespace std;
void reverse(int*arr,int low,int high){
    while(low<high){
        swap(arr[low++],arr[high--]);
    }
}

void Cyclicallyrotate(int*arr,int n){
    reverse(arr,0,n-1);
    reverse(arr,1,n-1);
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n=5;
    Cyclicallyrotate(arr,n);
    for(auto val: arr){
        cout<<val<<" ";
    }
    return 0;
}