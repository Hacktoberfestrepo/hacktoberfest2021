#include<iostream>
using namespace std;

int maxProfit(vector<int>& A) {
    if(A.size() == 0) return 0;
    int min = A[0];
    int mp = 0;
    for(int i = 1; i < A.size(); i++){
        if(A[i] < min) min = A[i];
        else if(A[i] - min > mp){
            mp = A[i] - min;
        }
    }
    return mp;
}

int main() {
    vector A{7,1,5,3,6,4};
    cout<<maxProfit(A);
}
