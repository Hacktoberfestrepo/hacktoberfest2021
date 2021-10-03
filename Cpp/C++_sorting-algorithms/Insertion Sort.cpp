#include<iostream>
using namespace std;
void insertionSort(int *array) {
	int size = 10;
	for (int i = 0; i < size; i++) {
		int value = array[i];
		int hole = i;

		while (hole > 0 && (array[hole - 1] > value)) {
			swap(array[hole], array[hole - 1]);
			hole--;
		}
		array[hole] = value;
	}
}

int main() {
	int array[10]={ 15, 12, 2, 98, 54, 32, 6, 11, 84, 32 };
	insertionSort(array);
	for (int i = 0; i < 10; i++) {
		cout << endl << "array[" << i << "]: " << array[i];
	}
}

