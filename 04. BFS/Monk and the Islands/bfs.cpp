#include<bits/stdc++.h>
using namespace std;
#define debug(a) cout << #a << "=" << a << ' '<<endl;
#define ll int64_t
const ll mx=1e5+5;

vector<int>adj[mx];
bool vis[mx];
int dis[mx];


void bfs(int src)
{
	  queue<int>q;
	  q.push(src);
	  vis[src]=true;
	  dis[src]=0;
	  
	  while(!q.empty())
	  {
	  	  int curr=q.front();
	  	  q.pop();
	  	  
	  	  for(auto child:adj[curr])
	  	  { 
	  	     if(!vis[child])
	  	     {
	  	     	  q.push(child);
	  	     	  vis[child]=true;
	  	     	  dis[child]=dis[curr]+1;
	  	     	  
	  	     }
	  	  
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
		  int n,m;
		  cin>>n>>m;
		  for(int i=0;i<=n;++i)
		  adj[i].clear();
		  
		  memset(vis,false,sizeof(vis));
		  
		  for(int i=0;i<m;++i)
		  {
		  	  int u,v;
		  	  cin>>u>>v;
		  	  adj[u].push_back(v);
		  	  adj[v].push_back(u);
		  }
		  
		  bfs(1);
		  
		  cout<<dis[n]<<endl;
	}
   
}
