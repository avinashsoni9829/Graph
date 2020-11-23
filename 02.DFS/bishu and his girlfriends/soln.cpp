#include<bits/stdc++.h>
using namespace std;

/*

for a graph to be tree

1) it should be connected

2) it should not have any cycle


*/

class Graph{
	
	int V;
	list<int>*adj;
	bool cycle_detection(int v,bool vis[],int parent);
	
	public:
	
	Graph(int V);
	void addEdge(int v,int w);
	bool isTree();
};

Graph::Graph(int V)
{
	this->V=V;
	adj=new list<int>[V+1];
}

void Graph::addEdge(int v,int w)
{
	adj[v].push_back(w);
	adj[w].push_back(v);
	
}

bool Graph::cycle_detection(int v, bool vis[],int parent)
{
	vis[v]=true;
	
	list<int>::iterator it;
	
	for(it=adj[v].begin(); it!=adj[v].end();++it)
	{
		if(!vis[*it])
		{
			if(cycle_detection(*it,vis,v))
			return true;
		}
		else
		if(*it!=parent)
		return true;
	}
	
	return false;
}


bool Graph::isTree()
{
	bool *vis=new bool [V+1];
	for(int i=0;i<=V;++i)
	vis[i]=false;
	// this checks for the presence of cycle
	if(cycle_detection(1,vis,-1))
	return false;
	// this checks for connectivity
	for(int u=1;u<=V;++u)
	{
		if(!vis[u])
		return false;
	}

	return true;
}



int main()
{
	int n,m;
	cin>>n>>m;
	Graph g(n);
	
	for(int i=0;i<m;++i)
	{
		int u,v;
		cin>>u>>v;
		g.addEdge(u,v);
	}
	
	if(g.isTree())
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
		
	}
	
	
}

