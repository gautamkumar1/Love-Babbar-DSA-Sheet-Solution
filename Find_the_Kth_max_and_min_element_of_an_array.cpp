#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k)
{
    priority_queue<int> pq;
    int n = l + r + 1;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
    }
    int cnt = 0;
    while (cnt != n - k)
    {
        pq.pop();
        cnt++;
    }
    return pq.top();
}

int main(){
    int arr[] = {4,8,1,9};
    int l = 0;
    int h = 3;
    int k = 2;
    cout<<kthSmallest(arr,l,h,k)<<endl;
    return 0;
}