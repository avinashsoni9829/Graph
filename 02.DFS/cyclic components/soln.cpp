#include<bits/stdc++.h>
using namespace std;
#define ll long long int

const ll mx=2e5+5;

vector<ll>adj[mx];
vector<ll>cc;
bool vis[mx];

ll deg[mx];


void dfs(int u)
{
	cc.push_back(u);
	vis[u]=true;
	
	for(auto child:adj[u])
	{
		if(!vis[child])
		dfs(child);
	}
}

int main()
{
	memset(vis,false,sizeof(vis));
	
	ll n,m;
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		adj[i].clear();
	}
	
	for(int i=1;i<=m;++i)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
		deg[u]+=1;
		deg[v]+=1;
	}
	int ans=0;
	
	for(int i=1;i<=n;++i)
	{
		if(!vis[i])
		{
			cc.clear();
			dfs(i);
			
			// each element in the cc should have degree 2
		            bool check=true;
		            for(auto z:cc)
		            {
		            	if(deg[z]!=2)
		            	{
		            		check=false;
		            		break;
		            	}
		            	
		            	
		            	
		            }	
		            
		            if(check)
		            {
		            	ans+=1;
		            } 
			
		}
	}
	
	cout<<ans<<endl;
}
