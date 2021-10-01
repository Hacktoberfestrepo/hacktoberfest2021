/*
input:
7
5
0 1 10
2 3 10
4 5 10
5 6 10
4 6 10

output:
The connected components are :
[[0, 1], [2, 3], [4, 5, 6]]
*/

#include<bits/stdc++.h>
using namespace std;
//create the graph
void add(vector<pair<int,int>> adj[],int u1,int u2,int w1)
{
    adj[u1].push_back(make_pair(u2,w1));
    adj[u2].push_back(make_pair(u1,w1));
}

//dfs function
void dfs(vector<pair<int,int>> adj[],vector<int>&visited,int u1,vector<vector<int>>&cc,int k)
{
    visited[u1]=1;int i=0;cc[k].push_back(u1);
    while(i<adj[u1].size())
    {
        if(visited[adj[u1][i].first]==0)
        {
            dfs(adj,visited,adj[u1][i].first,cc,k);
        }
        i++;
    }
}
int main()
{
    int v,e,u1,u2,w1;cin>>v>>e;//v= no of vertices ,e= n of edges
    vector<pair<int,int>> adj[v];
    for(int i=0;i<e;i++)
    {
        cin>>u1>>u2>>w1;//input the edges like (1st vertex,2nd vertex,edge weight)
        add(adj,u1,u2,w1);
    }

    vector<vector<int>> cc;int k=0;vector<int>visited(v,0);vector<int>vi;
    for(int i=0;i<v;i++)
    {
        if(visited[i]==0)
        {
            cc.push_back(vi);
            dfs(adj,visited,i,cc,k);k++;
        }
    }

    cout<<"The connected components are : \n";
    cout<<"[";int i,j;
    for(i=0;i<cc.size()-1;i++)
    {
        cout<<"[";
        for( j=0;j<cc[i].size()-1;j++)
        {
            cout<<cc[i][j]<<", ";
        }
        cout<<cc[i][j]<<"]"<<", ";
    }
    cout<<"[";
    for(j=0;j<cc[i].size()-1;j++)
        {
            cout<<cc[i][j]<<", ";
        }
        cout<<cc[i][j]<<"]"<<"]";
}
