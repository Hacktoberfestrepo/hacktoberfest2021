#include<bits/stdc++.h>
using namespace std;
vector<int> kurushtra(vector<pair<int,int>>adj[],int start){
    vector<int>v(adj->size(),INT_MIN);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>mp;
    mp.push(make_pair(start,0));
    v[start]=0;
    while(!mp.empty()){
        int p=mp.top().first;
        mp.pop();
        for(auto x=adj[p].begin();x!=adj[p].end();x++){
            int d1=x->first;
            int d2=x->second;
            if(v[d1]>d2+v[p]){
                v[d1]=d2+v[p];
                mp.push(make_pair(d1,v[d1]));

            }
        }
    }
    return v;
}
int main(){
    // int v=5;
    vector<pair<int,int>>adj[9];
   adj[0].push_back(make_pair(1,4));
   adj[1].push_back(make_pair(0,4));
   adj[0].push_back(make_pair(7,8));
   adj[7].push_back(make_pair(0,8));
    adj[1].push_back(make_pair(2,8));
     adj[2].push_back(make_pair(1,8));
      adj[1].push_back(make_pair(7,11));
       adj[7].push_back(make_pair(1,11));
        adj[2].push_back(make_pair(3,7));
         adj[3].push_back(make_pair(2,7));
          adj[2].push_back(make_pair(8,2));
           adj[8].push_back(make_pair(2,2));

            adj[2].push_back(make_pair(5,4));
            adj[5].push_back(make_pair(2,4));
            adj[3].push_back(make_pair(4,9));
            adj[4].push_back(make_pair(3,9));
            adj[5].push_back(make_pair(3,14));
            adj[3].push_back(make_pair(5,14));
            adj[5].push_back(make_pair(4,10));
            adj[4].push_back(make_pair(5,10));
            adj[6].push_back(make_pair(5,2));
            adj[5].push_back(make_pair(6,2));
            adj[7].push_back(make_pair(6,1));
            adj[6].push_back(make_pair(7,1));
            adj[8].push_back(make_pair(6,6));
            adj[6].push_back(make_pair(8,6));
            adj[8].push_back(make_pair(7,7));
           adj[7].push_back(make_pair(8,7));
        //    vector<int>v1;
           vector<int>v1=kurushtra(adj,0);
           for(int i=0;i<9;i++){
               cout<<v1[i]<<" ";
           }
    return 0;
}