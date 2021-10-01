/******************************************************************************

Sorting is a way to get the elements in a particular order(ascending or descending).

Selection Sort is a type of sorting technique. In this, we first find the minimum
element in the array and replace it with the ith element of the array.
Time Complexity: O(n^2)

*******************************************************************************/

#include <iostream>

using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b; 
    *b = temp;
}

int main()
{
    int n = 6;
    int arr[n] = {4, 11, 6, 30, 1, 8};
    
    for(int i = 0; i<n; i++){
        int minimum_no = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minimum_no]){
                minimum_no = j;
            }
        }
        swap(&arr[i], &arr[minimum_no]);
    }
    
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
