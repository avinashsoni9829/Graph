#include<bits/stdc++.h>
using namespace std;

const int mx=1e5+5;

vector<int>adj[mx];
bool vis[mx];


void dfs(int v)
{
	vis[v]=true;
	for(int i=0;i<adj[v].size();++i)
	{
		if(!vis[adj[v][i]])
		dfs(adj[v][i]);
	}
}

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,e;
		cin>>n>>e;
		
		for(int i=0;i<=mx;++i)
		adj[i].clear();
		
		memset(vis,false,sizeof(vis));
		
		for(int i=0;i<e;++i)
		{
			int u,v;
			cin>>u>>v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		
		
		
		
		
	    
	}
	
}
