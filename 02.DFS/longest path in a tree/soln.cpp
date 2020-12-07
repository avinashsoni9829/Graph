// solved using 2 dfs

// dfs on node with maximum distance from root gives diameter of the tree

#include<bits/stdc++.h>
using namespace std;


const int mx=1e4+5;
int mxD,mxnD;


vector<int>adj[mx];

bool vis[mx];

void dfs(int u,int d)
{
	vis[u]=true;
	
	if(d>mxD)
	{
		mxD=d;
		mxnD=u;
	}
	
	for(auto child:adj[u])
	{
		if(!vis[child])
		{
			dfs(child,d+1);
		}
	}
	
}




int main()
{
	int n;
	cin>>n;
	
	for(int i=1;i<=n;++i)
	adj[i].clear();
	
	memset(vis,false,sizeof(vis));
	
	for(int i=1;i<=n-1;++i)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	
	mxD=-1;
	
	dfs(1,0);
	
	
	
	
	memset(vis,false,sizeof(vis));
	
	mxD=-1;
	
	dfs(mxnD,0);
	
	
	cout<<mxD<<endl;
	
	
	
	
}
