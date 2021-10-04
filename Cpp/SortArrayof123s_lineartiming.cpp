//contributed by : Priyansh Jha
#include<bits/stdc++.h>
using namespace std;
//swap function (utility function)
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
//function to sort the array
void sortMyArray(int a[], int arr_size)
{
    int lo = 0;
    int hi = arr_size - 1;
    int mid = 0;

    while (mid <= hi)
    {
        switch (a[mid])
        {
        case 0:
            swap(&a[lo++], &a[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(&a[mid], &a[hi--]);
            break;
        }
    }
}
//main function taking predefined input
int main()
{
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortMyArray(arr, n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
