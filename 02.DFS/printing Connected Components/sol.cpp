/* display connected components in a graph */

#include<bits/stdc++.h>
using namespace std;

int n;
vector<int>adj[mx];
bool vis[mx];
vector<int>cc;


void dfs(int v)
{
	vis[v]=true;
	cc.pb(v);
	for(int i=0;i<adj[v].size();++i)
	{
		if(!vis[adj[v][i]])
		dfs(adj[v][i]);
	}
}


int main()
{
	for(int i=0;i<n;++i)
	adj[i].clear();
	memset(vis,false,sizeof(vis));
	
	/* create the graph here !  */
	for(int i=0;i<n;++i)
	{
		if(!vis[i])
		{
			cc.clear();
			dfs(i);
			for(auto z:cc)
			cout<<z<<" ";
			cout<<endl;
		}
	}
	
}
