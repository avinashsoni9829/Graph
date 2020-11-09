	#include<bits/stdc++.h>
	using namespace std;
	
	const int mx=1e5+5;
	
	vector<int>adj[mx];
	bool vis[mx]={false};
	
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
		int n,m;
		cin>>n>>m;
		/* clearing the adjacency list */
		for(int i=1;i<=mx;++i)
		adj[i].clear();
		/*   creating the graph         */ 
		
		for(int i=0;i<m;++i)
		{
			int u,v;
			cin>>u>>v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		
		int x;
		cin>>x;
		
		dfs(x);
		int ans=0;
		for(int i=1;i<=n;++i)
		if(vis[i]) ans++;
		
		cout<<n-ans<<endl;
		memset(vis,false,sizeof(vis));
	}
