/* template for dfs questions  */
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define debug(a) cout << #a << "=" << a << ' '<<endl;
#define out(x)  for(auto &t:x) cout<<t<<" "; cout<<endl;
#define all(x) x.begin(),x.end()

const ll mx=1e5+5;

const ll modu=1e9+7;

vector<ll>adj[mx];
bool vis[mx];


void dfs(ll u)
{
	vis[u]=true;
	
	for(auto child:adj[u])
	{
		if(!vis[child])
		dfs(child);
		
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		
		/*  clearing the adjacency list */ 
		for(int i=0;i<=mx;++i)
		adj[i].clear();
		
		memset(vis,false,sizeof(vis));
		/*   creating the graph          */
		for(int i=0;i<e;++i)
		{
			ll u,v;
			cin>>u>>v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		
		// dfs call
		for(int i=1;i<=n;++i)
		{
			if(!vis[i])
			{
				
				dfs(i);
			}
		}
		
		
		
	    
	}
	
	
	return 0;
	
	
}
