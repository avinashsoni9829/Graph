#include<bits/stdc++.h>
using namespace std;
const int mx = 2000;

int x[mx],y[mx];
vector<int>adj[mx];
bool vis[mx];

int cc=0;

int area(int x1,int y1,int x2,int y2,int x3,int y3)
{
	return (x2-x1)*(y3-y1) - (y2-y1)*(x3-x1);
}

void dfs(int u)
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
	int n,xx,yy;
	cin>>n>>xx>>yy;
	
	for(int i=0;i<=n;++i)
	adj[i].clear();
	memset(vis,false,sizeof(vis));
	for(int i=0;i<n;++i)
	{
		cin>>x[i]>>y[i];
		x[i]-=xx;
		y[i]-=yy;
		
	}
	
	for(int i=0;i<n;++i)
	{
		for(int j=i+1;j<n;++j)
		{
			int s=area(0,0,x[i],y[i],x[j],y[j]);
			
			if(s==0)
			{
				adj[i].push_back(j);
				adj[j].push_back(i);
			}
		}
	}
	
	for(int i=0;i<n;++i)
	{
		if(!vis[i])
		{
			
			cc+=1;
			dfs(i);
		}
	}
	
	cout<<cc<<endl;
}
