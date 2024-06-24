package Graphs;

import java.util.*;

public class countPaths {
	private int V;
	private LinkedList<Integer> adj[];
	countPaths(int v){
		V=v;
		adj = new LinkedList[v];
		for(int i=0;i<V;i++)
			adj[i]=new LinkedList<Integer>();
	}
	void addEdge(int u,int v) {
		adj[u].add(v);
	}
	int countPathUTIL(int u,int d,int count) {
		if(u==d) {
			count++;
		}
		else
		{
			Iterator<Integer> i=adj[u].listIterator();
			while(i.hasNext()) {
				int n=i.next();
				count=countPathUTIL(n,d,count);
			}
		}
		return count;
	}
	int Pathcount(int s,int d) {
		int CountPath=0;
		CountPath=countPathUTIL(s,d,CountPath);
		return CountPath;
	}
	public static void main(String[] args) {
		
		countPaths g = new countPaths(5); 
        g.addEdge(0, 1); 
        g.addEdge(0, 2); 
        g.addEdge(0, 3); 
        g.addEdge(1, 3); 
        g.addEdge(2, 3); 
        g.addEdge(1, 4); 
        g.addEdge(2, 4); 
  
        int s = 0, d = 3; 
        System.out.println(g.Pathcount(s, d)); 
	}

}
