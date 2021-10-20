#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i < n;i++)
		cin >> arr[i];	
	for(int i=0; i< n;i++)
		if(arr[arr[i]])
			cout << arr[arr[i]] << '\n';
}
