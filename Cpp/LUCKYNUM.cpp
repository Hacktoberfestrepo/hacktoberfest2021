#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)
const ll mod =1e9+7;
void solve()
{ 
  ll t;
  cin>>t;
  while(t--)
  {
      ll a,b,c;
      cin>>a>>b>>c;
      if(a==7||b==7||c==7)
      {
        cout<<"YES"<<endl;
      }
      else
        cout<<"NO"<<endl;
  }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

