#include<bits/stdc++.h>
using namespace std;

#define debug(x){cout<<"x : "<<x<<endl;}


void insertionSort(char arr[], int n) {
	for (int i = 1; i < n; i++) {
		int j = i;
		while (j > 0 && (arr[j] < arr[j - 1])) {
			swap(arr[j], arr[j - 1]);
			j--;
		}

	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}



Node* mergeTwoLists(Node* a, Node* b) {
	Node* temp = new Node(0);
	Node* res = temp;

	while (a != NULL && b != NULL) {
		if (a->data < b->data) {
			temp->bottom = a;
			temp = temp->bottom;
			a = a->bottom;
		}
		else {
			temp->bottom = b;
			temp = temp->bottom;
			b = b->bottom;
		}
	}

	if (a) temp->bottom = a;
	else temp->bottom = b;

	return
	    res->bottom;
}

Node *flatten(Node *root)
{
	// Your code here


}


int main() {
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char arr[] = "INSERSIONSORT";
	int n = sizeof(arr) / sizeof(int);
	cout << n << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";

	insertionSort(arr, n);

}