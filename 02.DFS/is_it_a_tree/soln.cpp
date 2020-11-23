#include<bits/stdc++.h>
using namespace std;

const int mx=1e4+5;

vector<int>adj[mx];
bool vis[mx];


void dfs(int node)
{
	vis[node]=true;
	
	for(auto child:adj[node])
	{
		if(!vis[child])
		dfs(child);
	}
	
}


int main()
{
	int n,m;
	cin>>n>>m;
	
	if(n-1!=m)
	{
	 cout<<"NO"<<endl;
	 return 0;
	}
	
	for(int i=0;i<m;++i)
	{
		int u,v;
		cin>>u>>v;
	           
	           adj[u].push_back(v);
	           adj[v].push_back(u);
	           
	           
	}
	
	int cc=0;
	
	for(int i=1;i<=n;++i)
	if(!vis[i])
	dfs(i),cc+=1;
	
	if(cc==1)
	{
		cout<<"YES"<<endl;
		
	}
	else
	{
		cout<<"NO"<<endl;
	}
	
	
	return 0;
}
