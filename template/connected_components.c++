/*   template for connected components based questions     */
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
vector<ll>cc;

void dfs(ll u)
{
	vis[u]=true;
	cc.pb(u);
	
	for(auto child:adj[u])
	{
		if(!vis[child])
		{
			dfs(child);
		}
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
		
		// for clearing the global ds
		
		for(int i=1;i<=n;++i)
		adj[i].clear();
		
		memset(vis,false,sizeof(vis));
		
		// graph creation
		for(int i=1;i<=m;++i)
		{
			ll u,v;
			cin>>u>>v;
			
			adj[u].pb(v);
			adj[v].pb(u);
			
		}
		
		
		// dfs call
		
		for(int i=1;i<=n;++i)
		{
			if(!vis[i])
			{
				cc.clear();
				
				dfs(i);
			}
		}
	}
	
	
	return 0;
	
	
}
