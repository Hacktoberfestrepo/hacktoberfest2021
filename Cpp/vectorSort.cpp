#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){

    vector<int>vec;
    int n, num;
    cin>>n;
    while(cin>>num)
    vec.push_back(num);

    sort(vec.begin(), vec.end());

    for(int i=0 ; i<n ; i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}