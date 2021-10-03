#include<iostream>
using namespace std;
#include<cmath>
void selectionSort(int *array);

int main(){
	int array[10]= { 15, 12, 2, 98, 54, 32, 6, 11, 84, 32 };
	selectionSort(array);

	for(int i = 0; i<10 ; i++){
		cout<<endl<< "array[ "<<i<<"] : "<<array[i+1];
	}
	
}
void selectionSort(int *array){
	int size = 10;
	for(int i =0 ; i <size+1 ; i++){
		for(int j = 0 ; j < size ; j++){
			if(array[i]<array[j]){
				swap(array[i], array[j]);
			}
			
		}
		
}
}

