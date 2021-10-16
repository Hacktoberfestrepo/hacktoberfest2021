#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef string str;

typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<str> vs;
typedef vector<vector <int> > vvi;
typedef vector<vector <ll> > vvl;

const ll remi=1000000007;
const ll remi2=998244353;
const ll inf=1e18+1e17+1e16+1e15+1e14;

#define pi 3.141592653589
#define pb push_back
#define F first
#define S second
#define el "\n"
#define sp " "

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
       ll m=1000000;
	bool prime[m + 1];
	memset(prime, true, sizeof(prime));

	for (ll p = 2; p * p <= m; p++)
	{
		if (prime[p] == true)
		{
			for (ll i = p * p; i <= m; i += p)
				prime[i] = false;
		}
	}
	prime[1]=false;
	ll n;
	cin>>n;
	for(ll i=1;i<=n;i++)
	{
		ll b;
		cin>>b;
		ll a=sqrt(b);
	if(prime[a]==true and a*a==b)
	cout<<"YES"<<el;
	else
	cout<<"NO"<<el;
	}

return 0;
}



