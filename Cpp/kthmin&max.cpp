//kth min max in same program
#include <algorithm>
#include <iostream>
using namespace std;

void kthSmallest(int arr[], int n, int k)
{

    sort(arr, arr + n);
    cout << arr[k - 1] << endl;
    cout << arr[n - (k)] << endl;
}

int main()
{
    int arr[] = {12, 3, 5, 7, 19};
    int n = sizeof(arr) / sizeof(arr[0]), k = 2;
    kthSmallest(arr, n, k);
    return 0;
}
