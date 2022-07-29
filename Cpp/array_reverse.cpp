#include <bits/stdc++.h>
using namespace std;

// there is a reverse function in <algorithm> library to reverse arrays, strings etc.

void reverseArray(int arr[], int start, int end, int n)
{
    while (end > start)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverseArray(arr, 0, n - 1, n);

    return 0;
}