#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;         //no of elements in array
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  cout<<"The elements before sorting:";
  for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
  }
  cout<<"\n";
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(v[i]>v[j]){
        int s=v[i];
        v[i]=v[j];
        v[j]=s;
      }
    }
  }
  cout<<"The elements after sorting:";
  for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
  }
  cout<<"\n";
  return 0;
}
