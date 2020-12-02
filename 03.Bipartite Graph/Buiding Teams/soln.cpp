#include<bits/stdc++.h>
using namespace std;
const int mx=2e5+5;
vector<int>color(mx);
int n,m;
vector<int>adj[mx];
bool vis[mx];

bool dfs(int v,int c)
{
	vis[v]=true;
	color[v]=c;
	for(auto child:adj[v])
	{
		if(!vis[child])
		{
			if(c==1)
			{
			if(dfs(child,2)==false)
			return false;
			}
			else
			{
				if(dfs(child,1)==false)
				return false;
			}
		}
		else
		if(color[v]==color[child])
		return false;
	}
	
	return true;
}


int main()
{
  cin>>n>>m;
  
  memset(vis,false,sizeof(vis));
  
  for(int i=1;i<=n;++i)
  adj[i].clear();
  
  for(int i=0;i<m;++i)
  {
  	int u,v;
  	cin>>u>>v;
  	adj[u].push_back(v);
  	adj[v].push_back(u);
  }
  bool flag=true;
  for(int i=1;i<=n;++i)
  {
  	if(!vis[i])
  	{
  		
  		flag=dfs(i,1);
  		
  	}
  	
  }
  
  
  if(flag)
  {
  	for(int i=1;i<=n;++i)
  	cout<<color[i]<<" ";
  	cout<<endl;
  	color.clear();
  }
  else
  {
  	cout<<"IMPOSSIBLE"<<endl;
  	
  }
  
  
  
  
  	
	
}
