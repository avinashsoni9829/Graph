 /*
DFS()

*/

#include<bits/stdc++.h>
using namespace std;


class Graph
{
	// No. of Vertices
	int V;
	list<int>*adj;
	void DfsUtil(int v,bool vis[]);
	
	public:
	Graph(int V);
	void addEdge(int v,int w);
	void Dfs(int v);
};

Graph::Graph(int V)
{
	this->V=V;
	adj=new list<int>[V];
}

void Graph::addEdge(int v,int w)
{
	adj[v].push_back(w);
}

void Graph::DfsUtil(int v,bool vis[])
{
	vis[v]=true;
	cout<<v<<" ";
	list<int>::iterator i;
	for(i=adj[v].begin();i!=adj[v].end();++i)
	if(!vis[*i])
	DfsUtil(*i,vis);
}

void Graph::DFS(int v)
{
	bool *vis=new bool[V];
	for(int i=0;i<V;++i)
	vis[i]=false;
	
	DfsUtil(v,vis);
}


int main()
{

}


