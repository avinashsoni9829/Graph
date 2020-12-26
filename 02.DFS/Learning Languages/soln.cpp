#include<bits/stdc++.h>
using namespace std;
#define debug(a) cout << #a << "=" << a << ' '<<endl;
#define ll int64_t

const int mx=1005;

vector<int>adj[mx];
bool vis[mx];


void dfs(int u)
{
	  vis[u]=true;
	  for(auto child:adj[u])
	  {
	  	   if(!vis[child]) dfs(child);
	  }
}

int main()
{ 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;++i) adj[i].clear();
	memset(vis,false,sizeof(vis));
	
	ll ans=0;
	for(int i=1;i<=n;++i)
	{
		  int x;
		  cin>>x;
		  ans+=x;
		  while(x--)
		  {
		  	  int z;
		  	  cin>>z;
		  	  z+=505;
		  	  adj[z].push_back(i);
		  	  adj[i].push_back(z);
		  }
		 
	}
	
	int cc=0;
	
	for(int i=1;i<=n;++i)
	{
		  if(!vis[i])
		  {
		  	 dfs(i);
		  	 cc+=1;
		  	 
		  }
	}
// 	
	// debug(cc);
	// debug(ans);
	
	
	if(ans >0 )
	cout<<cc-1<<endl;
	else
	cout<<cc<<endl;
	
	
  
}
