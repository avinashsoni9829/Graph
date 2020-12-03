#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

const ll mx=1e5+5;
const ll modu=1e9+7;

vector<int>adj[mx];
vector<int>cc;
bool vis[mx];

void dfs(int u)
{
	vis[u]=true;
	cc.push_back(u);
	for(auto child:adj[u])
	{
		if(!vis[child])
		dfs(child);
	}
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
		ll cc_count=0;
		ll perm=1;
		for(int i=1;i<=n;++i)
		{
			if(!vis[i])
			{
				cc.clear();
				dfs(i);
				perm=(perm%modu*(int)cc.size()%modu)%modu;
				cc_count+=1;
			}
		}
		cout<<cc_count<<" "<<perm<<endl;
	}
	
	
}
