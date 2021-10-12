#include <iostream>
using namespace std;

//function to swap elements
void swap(int *a, int *b){
    int t = *a ;
    *a = *b ;
    *b = t ;
}

// function to print the array 
void printArray(int arr[], int size){
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" " ;
    }
    cout<<endl ;
}

//function to rearrange array (to find the pivot i.e. partition point)
int partition(int arr[], int low, int high){
    int pivot = arr[high] ; // selecting rightmost element as pivot
    int i = low-1 ; // pointer for greater element
    
    //traverse each element of array
    // compare them with pivot
    // if element smaller than pivot is found,
    // swap it with greater element pointed by i 
    for(int j= low ; j<high ; j++){
        if(arr[j] <= pivot){
            i++ ;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]) ;

    //return the partition point 
    return (i+1);
}

// now, find the pivot element such that
// elements smaller than pivot are on left of pivot
// elements greater than pivot are on righ of pivot
void quickSort(int arr[], int low, int high){
    if(low < high){
        int pi = partition(arr, low, high);

        //recursively call on left side array to pivot
        quickSort(arr, low, pi-1);

         //recursively call on right side array to pivot
        quickSort(arr, pi+1, high);
    }
}

int main(){
    int testArr[] = {20, 10, 70, 30, 50};
    int size = sizeof(testArr)/sizeof(testArr[0]);
    quickSort(testArr, 0, size-1);
    cout<<"Sorted Array: \n" ;
    printArray(testArr, size);
    return 0 ;
}
