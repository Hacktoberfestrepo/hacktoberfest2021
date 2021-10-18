// Count sort for all elements in the range [1, 1000].

#include <bits/stdc++.h>
using namespace std;
void countSort(int size, int array[], int frequency[], int sorted[]) {
 for(int i = 0; i < size; i++) {
 frequency[array[i]]++;
 }
 
 for(int i = 1; i < 1001; i++) {
 frequency[i] = frequency[i] + frequency[i - 1];
 }
 
 for(int i = size - 1; i >= 0; i--) {
 sorted[frequency[ array[i] ] - 1] = array[i];
 frequency[ array[i] ]--;
 }
}
int main() {
 int size;
 cin >> size;
 int array[size];
 for(int i = 0; i < size; i++) {
 cin >> array[i];
 }
 
 int frequency[1001] = {0};
 int sorted[size]; //sorted array
 countSort(size, array, frequency, sorted);
 
 for(int i = 0; i < size; i++) {
 cout << sorted[i] << " ";
 }
