/*  template for graph bipartite questions */ 

#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define pb push_back
#define debug(a) cout << #a << "=" << a << ' '<<endl;
#define all(x) x.begin(),x.end()
#define out(x)  for(auto &t:x) cout<<t<<" "; cout<<endl;



const ll mx=1e5+5;
const ll modu=1e9+7;

vector<ll>adj[mx];
bool vis[mx];
vector<ll>color;

bool dfs(ll u,int c)
{
	vis[u]=true;
	color[u]=c;
	
	for(auto child:adj[u])
	{
		if(!vis[child])
		{
			if(dfs(child,c^1)==false)
			return false
		}
		else
		if(color[u]==color[child])
		return false;
	}
	
	return true;
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
		
		// clear globals
		for(int i=1;i<=n;++i)
		{
			adj[i].clear();
		}
		
		memset(vis,false,sizeof(vis));
		
		// graph formation
		for(int i=1;i<=m;++i)
		{
			
			ll u,v;
			cin>>u>>v;
			
			adj[u].pb(v);
			adj[v].pb(u);
		}
		
		// dfs call
		bool isPartite=true;
		for(int i=1;i<=n;++i)
		{
			if(!vis[i])
		            {
		            	isPartite=dfs(i,0);
		            	if(!isPartite)
		            	break;
		            }
			
		}
		
		if(isParite)
		{
			
		}
		else
		{
			
		}
		
	}
	
	return 0;
	
	
	
}
