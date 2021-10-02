#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        if ((n-k) == 1)
         cout << "-1" << endl;
        else if(n==k){
            for(int i = 1; i < (n+1); i++)
             cout << i << " ";
            cout << endl; 
        }     
        else{
            for(int i = 1; i < (k+1); i++)
             cout << i << " ";
            for(int i = (k+2); i < (n+1); i++)
             cout << i << " ";
            cout << (k+1) << endl;  
        }      

    }
}
