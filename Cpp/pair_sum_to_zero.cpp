//Pair Sum to 0

//Given a random integer array A of size N. Find and print the count of pair of elements in the array which sum up to 0.
//Input = 2 -2 2 -2 3 -3
//Output = 5



#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
	unordered_map<int,int> map;
	int n,i;
	cout<<"Enter the size of an array: ";
	cin>>n;
	int arr[100];
	int pair=0;
	cout<<"Enter the elements: ";
	for(i=0;i<n;i++){
		cin>>arr[i];
		map[arr[i]]++;
	}
	for(i=0;i<n;i++){
		if(map.count(-arr[i]) > 0){
			pair= pair + map[arr[i]]*map[-arr[i]];
			map[arr[i]] = 0;
			map[-arr[i]] = 0;
		}	
	}
	cout<<pair;
	return 0;
}
