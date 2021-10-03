#include<iostream>
using namespace std;

int merge(int array[], int left, int mid, int right){
	int n1= mid-left +1;
	int n2 = right-mid;
	int L[n1], R[n2];
	for(int i = 0 ; i < n1 ; i++){
		L[i]=array[left+i];
	}
	for(int j = 0 ; j < n2 ; j++){
		R[j]= array[mid+1+j];
	}
	int i = 0, j = 0, k = 1; 	
	
	//copy data to temporary arrays
	while(i<n1 && j<n2){
		if(L[i]<=R[j]){
			array[k]=L[i];
			i++;
		}
		else{
		
		array[k]=R[j];
		j++;
	}
	k++;
}
while(i<n1){
	array[k]=L[i];
	i++;
	k++;
}
while(j<n2){
	array[k]=R[j];
	j++;
	k++;
}

	
}
void mergeSort(int array[], int left, int right){
	if(left>=right){
		return;
	}
	int mid = left + (right - left)/2;
	mergeSort(array, left, mid);
	mergeSort(array, mid+1, right);
	merge(array, left, mid, right);
}
void printArray(int array[], int size){
	for(int i = 0 ; i < size; i++){
		cout<<array[i]<<" ";
	}
}
int main(){
	int array[]={11, 55, 44, 22, 33, 0};
	int arr_size = sizeof(array)/sizeof(array[0]);
	cout<<"Given array is ";
	printArray(array, arr_size);
	cout<<endl;
	mergeSort(array, 0, arr_size-1);
	cout<<"Sorted Array is  ";
	printArray(array, arr_size);
	return 0;
}
