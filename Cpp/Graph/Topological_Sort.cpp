// There are multiple topological sorting possible for a graph.
// order : start with element containing zero indegree , ends with zero outdegree .

/*
 	STEPS :
 		1 -> Find Indegree of all vertices.
 		2 -> Push all nodes with Indegree = 0  into a queue.
 		3 -> Process the queue from front & pop element(Element push into output) & reduce Indegree & repeat step 2.
 		
 	INPUT Format :
 		int n,m ; (n = number of nodes , m = number of edges)
 		followed by m number of directed edges from (u->v)
*/

#include<bits/stdc++.h>
using namespace std ;

const int MAX=1e5 ;
vector<int> Topo_order; //Stores the Topological Order
vector<int> g[MAX] ;

bool topological_sort(int n) //Returns 1 if there exists a toposort, 0 if there is a cycle
{
    queue<int> Q;
	vector<int> indegree_cnt(n + 1, 0);
	for(int i = 1; i <= n; i++)
		for(auto &it:g[i])
			indegree_cnt[it]++;

    for(int i = 1; i <= n; i++)
	{
		if(!indegree_cnt[i])
			Q.push(i);
	}
    while(!Q.empty())
	{
		int u = Q.front();
		Q.pop();
		Topo_order.push_back(u);
		for(auto &v:g[u])
		{
			indegree_cnt[v]--;
			if(!indegree_cnt[v])
				Q.push(v);
		}
	}
    return (Topo_order.size() == n) ;
}


int32_t main(){
    
    int n,m,u,v ;
    cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>u>>v;
		g[u].push_back(v);
	}
	bool ans = topological_sort(n) ;
    if (ans){
    	cout<< "Topological Order is as follows: " ;
    	for(auto i : Topo_order)	
    		cout<<i<<" " ;
    	cout<<"\n" ;
	}
	else{
		cout<< "Topological Order can't possible"<<"\n" ;
	}
    return 0 ;
}      

/*
	EXAMPLE :
		6 6
		6 3
		6 1
		5 1
		5 2
		3 4
		4 2
		Topological Order is as follows: 5 6 3 1 4 2
*/ 
