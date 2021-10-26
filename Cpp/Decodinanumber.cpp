#include <bits/stdc++.h>
#include <vector>
#include <climits>
using namespace std;

int main(){
    string s="21123025";
    vector<int> arr(s.length(),0);
    int count =1;
    arr[0] = 1;
    for (int i=1;i<s.length();i++){
        if(s[i-1]=='0'&&s[i]=='0'){
            arr[i] = 0;
        }
        else if (s[i - 1] == '0' && s[i] != '0'){
            arr[i] = arr[i - 1];
        }
        else if (s[i - 1] != '0' && s[i] == '0')
        {
            if (s[i-1]=='2'||s[i-1]=='1'){
                arr[i] = i>=2?arr[i - 2]:1;
            }else{
                arr[i] = 0;
            }
            
        }else{

            int h = (s[i - 1] - '0') * 10 + (s[i] - '0');
            
            if (h<=26){
                if (i>=2){
                    arr[i] = arr[i - 2] + arr[i - 1];
                }else{
                    arr[i] = arr[i - 1] + 1;
                }
                
            }else{
                arr[i] = arr[i - 1];
            }
        }
    }
    for (auto p:arr){
        cout << p<< endl;
    }
    
    
}