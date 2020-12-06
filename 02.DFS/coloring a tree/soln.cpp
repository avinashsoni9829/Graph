#include<bits/stdc++.h>
using namespace std;
const int mx=1e4+5;
vector<int>adj[mx];
vector<int>color(mx);
vector<int>t(mx);
bool vis[mx];
int ans=0;
//#define debug(a) cout << #a << "=" << a << ' '<<endl;


void dfs(int u)
{
	vis[u]=true;
	
	for(auto child:adj[u])
	{
	    if(!vis[child])
	    {
	    	if(color[child]!=color[u])
	    	{
	    	ans++;
	    	
	    	}
	    	dfs(child);
	    }
	}
	
}

int main()
{
	int n;
	cin>>n;
	
	for(int i=0;i<=n;++i)
	adj[i].clear();
	
	memset(vis,false,sizeof(vis));
	
	for(int i=2;i<=n;++i)
	{
		int x;
		cin>>x;
		// debug(i);
		// debug(x);
		adj[i].push_back(x);
		adj[x].push_back(i);
	}
	
	for(int i=0;i<n;++i)
	cin>>color[i+1];
	
	dfs(1);
	cout<<ans+1<<endl;
	
	
	
	
	
}
