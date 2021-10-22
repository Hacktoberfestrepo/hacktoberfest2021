#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> graph[100005];
int visited[100005];
vector<vector<int>> v;

void dfs(int src, vector<int> &v1)
{
    visited[src] = 1;
    v1.push_back(src);
    for (auto a : graph[src])
    {
        if (visited[a.first] != 1)
        {
            dfs(a.first, v1);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        graph[x].push_back(make_pair(y, z));
        graph[y].push_back(make_pair(x, z));
    }

    for (int i = 0; i < n; i++)
    {

        if (visited[i] != 1)
        {
            vector<int> v1;
            dfs(i, v1);
            v.push_back(v1);
        }
    }
    cout<<"[";
    for (int i = 0; i < v.size(); i++)
    {       cout<<"[";    
        for (int j = 0; j < v[i].size(); j++)
        {       
            if(j+1<v[i].size())
             cout << v[i][j] << ", ";
             else
             cout<<v[i][j];
             
             
        }
        if(i+1<v.size())
        cout<<"], ";
        else
        cout<<"]";
        
        
    }
    cout<<"]";

    return 0;
}
