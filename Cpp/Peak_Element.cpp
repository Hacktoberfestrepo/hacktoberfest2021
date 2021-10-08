// Maximum element in the array

#include<bits/stdc++.h>
using namespace std;

int pa(int a[],int n)
{
    int s=0,e=n-1,mid,prv,nxt;
    while(s<=e)
    {
    mid=(e-s)/2 + s;
    prv=(mid-1+n)%n;
    nxt=(mid+1)%n;
    if(a[prv]<a[mid] && a[nxt]<a[mid])
         return mid;
    else if(a[prv]>a[mid])
        e=mid-1;
    else if(a[nxt]>a[mid])
        s=mid+1;
    }
 return mid ;
}

int main()
{
    int n; cin>>n;
    int ar[n];
    for(int i=0;i<n;++i)  cin>>ar[i];
    int ans=pa(ar,n);
    cout<<"Index of peak element is "<<ans;
    return 0;
}
