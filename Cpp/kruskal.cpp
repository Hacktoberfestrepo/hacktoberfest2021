#include <bits/stdc++.h>
using namespace std;

#define ff(i, a, b) for (int i = int(a); i < int(b); i++)
#define ffn(i, n) ff(i, 0, n)

struct edge
{
    int u;
    int v;
    int w;
};

struct point
{
    int parent;
    int rank;
};

int comp(edge a, edge b)
{
    if (a.w == b.w)
        return a.v < b.v;
    return a.w < b.w;
}

int find(point subset[], int node)
{
    if (subset[node].parent == -1)
        return node;
    return subset[node].parent = find(subset, subset[node].parent);
}

void unionFun(point subset[], int xroot, int yroot)
{
    if (subset[yroot].rank >= subset[xroot].rank)
    {
        subset[xroot].parent = yroot;
        subset[yroot].rank += subset[xroot].rank;
    }
    else
    {
        subset[yroot].parent = xroot;
        subset[xroot].rank += subset[yroot].rank;
    }
}

void algo_krus(vector<edge> graph, int V, int E)
{
    sort(graph.begin(), graph.end(), comp);
    point subset[V];
    int cost = 0;

    ffn(i, V)
    {
        subset[i].parent = -1;
        subset[i].rank = 1;
    }

    int cnt = 0;
    vector<edge> ans;
    for (int i = 0; cnt < V - 1, i < E; i++)
    {
        edge node = graph[i];
        int u = node.u;
        int v = node.v;
        int w = node.w;

        int xroot = find(subset, u);
        int yroot = find(subset, v);

        if (xroot != yroot)
        {
            cost += w;
            ans.push_back(node);
            unionFun(subset, xroot, yroot);
        }
    }
    cout << cost << endl;
}

int main()
{
    int V, E, a, b, c;
    cin >> V;
    cin >> E;
    vector<edge> graph;
    ffn(i, E)
    {
        cin >> a >> b >> c;
        graph.push_back({a, b, c});
    }
    algo_krus(graph, V, E);
    return 0;
}
