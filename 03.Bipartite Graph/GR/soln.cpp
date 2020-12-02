#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mx=1e5+5;
vector<ll>adj[mx];
bool vis[mx];
vector<ll>color(mx);

bool dfs(ll u,ll c)
{
	vis[u]=true;
	color[u]=c;
	
	for(auto child:adj[u])
	{
		if(!vis[child])
		{
			if(dfs(child,c^1)==false)
			return false;
		}
		else
		{
			
			if(color[u]==color[child])
			return false;
		}
	}
	
	return true;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		
		for(int i=1;i<=n;++i)
		adj[i].clear();
		
		memset(vis,false,sizeof(vis));
		
		for(int i=1;i<=m;++i)
		{
			int u,v;
			cin>>u>>v;
			adj[u].push_back(v);
			adj[v].push_back(u);
			
		}
		bool isPartite=true;
		for(int i=1;i<=n;++i)
		{
			if(!vis[i])
			{
			isPartite=dfs(i,0);
			if(isPartite==false)
			break;
			}
			
		}
		
		if(isPartite)
		{
			cout<<"YeS"<<endl;
			
		}
		else
		{
			cout<<"No"<<endl;
		}
		
		
		
		
			
		
		
		
		
	}
}
