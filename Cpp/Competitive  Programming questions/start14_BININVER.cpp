#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll arr[n];
        ll l[n];
        ll even=0, odd = 0;
        for(int i=0;i<n;i++){
            cin >> arr[i];

            if(arr[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if (even == n){
            ll ans = 1e9;
            for (int i=0; i < n; i++){
                ll crr = 0;
                while(arr[i]%2 != 1){
                    arr[i] = arr[i]/2;
                    crr++;
                }
                if(crr<ans){
                    ans = crr;
                }
            }
            cout << ans << endl;
        }
        else{
            cout << "0" << endl;
        }
    }
    return 0;
}
