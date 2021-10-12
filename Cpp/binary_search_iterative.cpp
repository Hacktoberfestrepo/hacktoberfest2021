#include "bits/stdc++.h"
using namespace std;
int binarySearch(int arr[], int left, int right, int value){
	
	while(left<=right){
		int mid = left + (right - left)/2;
		if(arr[mid]==value){return mid;}
		else if(arr[mid]<value){
			left  = mid +1 ;
		}
		else {right  =  mid - 1;}

	}
	return -1;
}
int main(){
	int arr[5] = {2,3,5,6,11};
	cout<<binarySearch(arr,0,4,5);
	return 0;
}