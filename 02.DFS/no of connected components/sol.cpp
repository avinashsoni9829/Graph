/*     no of connnected components             */ 

#include<bits/stdc++.h>
using namespace std;

vector<int>adj[1000];
bool vis[1000];


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
	int n,e;
	cin>>n>>e;
	for(int i=0;i<e;++i)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	
	memset(vis,false,sizeof(vis));
	int cc=0;  // no of connected components 
	
	for(int i=1;i<=n;++i)
	{
		if(!vis[i])
		{
		dfs(i);
		cc+=1;
		}
	}
	
	cout<<cc<<endl;
	
	
	
}
