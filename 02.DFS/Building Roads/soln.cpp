#include<bits/stdc++.h>
using namespace std;

const int mx=1e5;
int n,m;
vector<int>adj[mx],ans;
bool vis[mx];

void dfs(int u)
{
	vis[u]=1;
	for(auto v:adj[u])
	{
		if(!vis[v])
		dfs(v);
			
	}
}

int main()
{
	cin>>n>>m;
	for(int i=0,u,v;i<m;++i)
	{
		cin>>u>>v;
		--u;
		--v;
		adj[u].push_back(v);
		adj[v].push_back(u);
		
	}
	
	for(int i=0;i<n;++i)
	{
		if(!vis[i])
		{
			ans.push_back(i);
			dfs(i);
		}
	}
	
	cout<<ans.size()-1<<endl;
	/*  connect every node with the first node  */
	for(int i=1;i<ans.size();++i)
	cout<<ans[0]+1<<" "<<ans[i]+1<<endl;
}


