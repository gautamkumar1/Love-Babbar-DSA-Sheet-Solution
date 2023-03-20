#include <iostream>
#include<limits.h>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    long long int sum = 0;
    long long int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxSum = max(maxSum, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxSum;
}

int main(){
    int arr[] = {1,2,3,-2,5};
    int n = 5;
    cout<<maxSubarraySum(arr,n)<<endl;
    return 0;
}