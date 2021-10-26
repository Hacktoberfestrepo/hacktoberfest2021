#include <bits/stdc++.h>
#include <vector>
#include <climits>
using namespace std;

int main(){
    string s1="abkccbc";
    vector<vector<int >>v(s1.size(),vector<int>(s1.size(),0));
    for (int i=0;i<s1.length();i++){
        v[i][i]=1;
    }
    for (int i=1;i<s1.length();i++){
        for (int j=0;j<s1.length();j++){
            if (i==1&&i+j<s1.length()){
                if (s1[i+j]==s1[j]){
                    v[j][i+j]=2;
                }else{
                    v[j][i+j]=1;
                }

            }
            else if (i+j<s1.length()){
                if (s1[i+j]!=s1[j]){
                    v[j][i+j]=max(v[j][i+j-1],v[j+1][i+j]);
                }else{
                    v[j][i+j]=2+v[j+1][i+j-1];
                }
            }
        }
    }
    cout<<v[0][s1.length()-1];
}