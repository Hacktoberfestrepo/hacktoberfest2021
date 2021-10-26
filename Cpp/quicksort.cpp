#include<iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int partition(int arr[], int l, int r)
{
    int pivot= arr[l];
    int i=l+1;
    int j=r;
    do
    {
        while(arr[i]<=pivot)
            i++;
        while(arr[j]>pivot)
            j--;
        if(i<j)
        swap(arr[i],arr[j]);
    }while(i<j);
    swap(arr[l],arr[j]);
    return j;
}

void quicksort(int arr[], int l, int r)
{
    int pivotindex;
    if(l<r)
    {
        pivotindex=partition(arr,l,r);
        quicksort(arr,l,pivotindex-1);
        quicksort(arr,pivotindex+1,r);
    }
}

int main()
{
    int n = 10;
    int arr[n];
    srand(time(0));
    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 30;
        cout << arr[i] << "  ";
    }
    quicksort(arr, 0, n - 1);
    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << "  ";
    return 0;
}