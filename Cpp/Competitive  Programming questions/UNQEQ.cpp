//author-suryaprak_adm
//link-https://www.codechef.com/LTIME100B/problems/UNQEQ
#include <iostream>
#include <vector>

using namespace std;

void solve(){
    long long int n;
    cin>>n;
    vector<int> v1;
    vector<int> v2(n/2);
    long long int sum = (n*(n+1))/2;
    long long int f = 0,s = (n/2)-1;
    if(sum%2 != 0) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        long long int start = 1,end = n; bool flag = true;
        while(start<=end){
            if(flag == true){
                flag = false;
                v1.push_back(start);
                v1.push_back(end);
                }
                else{
                          flag  = true;
                            v2[f]=start;
                           f++;
                            v2[s] = end;
                           s--;
                       }
                      start++;
                    end--;
            }
            for(auto it : v1) cout<<it<<" ";
              cout<<endl;
            for(auto it : v2) cout<<it<<" ";
                 cout<<endl;
        }
    return;
    }    
int main(){
   
long long int t = 1;
cin>>t;
for(int i = 1;i<=t;i++){
solve();
}

return 0;
}
