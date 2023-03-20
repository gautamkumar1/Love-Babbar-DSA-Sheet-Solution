#include <iostream>
using namespace std;
// T(n) : O(n) and S(n) : O(1)
int findSum(int A[], int N)
{
    int max_ = A[0];
    int min_ = A[0];
    for (int i = 1; i < N; i++)
    {
        if (A[i] > max_)
        {
            max_ = A[i];
        }
    }
    for (int i = 1; i < N; i++)
    {
        if (A[i] < min_)
        {
            min_ = A[i];
        }
    }
    return max_ + min_;
}

int main()
{
    int arr[] = {4, 5, 8, 1};
    int n = 4;
    cout << findSum(arr, n) << endl;
    return 0;
}