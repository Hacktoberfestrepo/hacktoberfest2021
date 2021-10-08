#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int z=0;
vector<int> mergesort(vector<int> v,int z){
  int n= v.size();
  // cout<<n<<" arr= ";
  
  // for(int i=0;i<n;i++)
  // cout<<v[i]<<" ";
  // cout<<endl;
  if(n==1)
  return v;
  
  
  
  
  vector<int> a,b;
  vector<int> t1,t2;
  vector<int> ret;
  
  for(int i=0;i<n/2;i++)
  {
    a.push_back(v[i]);
  }
  for(int i=n/2;i<n;i++)
  {
    b.push_back(v[i]);
  }
  
  t1= mergesort(a,z+1);  t2= mergesort(b,z+1);
  
  int m=t1.size(); n= t2.size();
  int i=0,j=0;
  while( !(i==m && n==j)  ){
    
    if(i<m && j<n)
    {
      if(t1[i]<t2[j])
      {ret.push_back(t1[i]);
          i++;
        
      }else
      {
        ret.push_back(t2[j]);
        j++;
      }
      continue;
      
    }
    
    if(i<m)
    {
      ret.push_back(t1[i]);
      i++;
     continue;
      
    }
    if(j<n)
    {
      ret.push_back(t2[j]);
      j++;
    }
    
     
  }
  
  // n= ret.size();
  // cout<<"ret = ";
  // for(int i=0;i<n;i++)
  // cout<<ret[i]<<" ";
  // cout<<endl;
  
  
  return ret;
  
}







int main() 
{
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
   int n;
   cin>>n;
   
   vector<int> v(n);
  // int arr[n];
   for(int i=0;i<n;i++)
   {
     cin>>v[i];
   }
 
 vector<int> ans;  
   ans=mergesort(v,z);
   
   for(int i=0;i<n;i++)
   cout<<ans[i]<<" ";
   
   
   
   
   
    return 0;
}
