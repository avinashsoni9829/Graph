/*  template for graph bipartite questions */ 

#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define pb push_back
#define debug(a) cout << #a << "=" << a << ' '<<endl;
#define all(x) x.begin(),x.end()
#define out(x)  for(auto &t:x) cout<<t<<" "; cout<<endl;



const ll mx=2e5+5;
const ll modu=1e9+7;

vector<ll>adj[mx];
bool vis[mx];
vector<ll>color(mx);
ll c0,c1;
vector<ll>a(mx);

bool dfs(ll u,int c)
{
	vis[u]=true;
	color[u]=c;
	if(c==0)
	c0+=a[u];
	else
	c1+=a[u];
	
	for(auto child:adj[u])
	{
		if(!vis[child])
		{
			if(dfs(child,c^1)==false)
			return false;
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
		for(int i=1;i<=n;++i)
		cin>>a[i];
		
		for(int i=0;i<=n;++i)
		color[i]=-1;
		
		
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
		
		ll ans1=0;
		ll ans2=0;
		
		int mx=-1;
		// dfs call
		bool isPartite=true;
		for(int i=1;i<=n;++i)
		{
			if(!vis[i])
		            {
		            	c0=0;
		            	c1=0;
		                       
		            	isPartite=dfs(i,0);
		            	ans1+=max(c0,c1);
		            	ans2+=min(c0,c1);
		            	
		            	if(!isPartite)
		            	break;
		            }
			
		}
		if(m==0)
		{
			cout<<"NOT POSSIBLE"<<endl;
			return 0;
		}
		
		if(ans1==ans2)
		{
			cout<<"NOT POSSIBLE"<<endl;
			return 0;
		}
		
		
		if(isPartite and ans1!=ans2)
		{
		
			cout<<"YES"<<endl;
		            
		            cout<<ans1<<endl;
			
			
			
			
			
		}
		else
		{
			cout<<"NOT POSSIBLE"<<endl;
			
		}
		
	}
	
	return 0;
	
	
	
}
