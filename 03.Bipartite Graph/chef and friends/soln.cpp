
// Problem: Chef and Friends
// Contest: CodeChef - Practice(Easy)
// URL: https://www.codechef.com/problems/CHFNFRN
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
const long long int  modu=1e9+7;
#define endl '\n'
#define ll long long int
#define vi vector<int>
#define vl vector<ll>
#define inp(x)  for(auto &t:x) cin>>t;
#define itr     vector<int>::iterator
#define debug(a) cout << #a << "=" << a << ' '<<endl;
#define out(x)  for(auto &t:x) cout<<t<<" "; cout<<endl;
#define ff first
#define ss second
#define pb push_back
#define initialize(a,v)  for(int i=0;i<a.size();++i) a[i]=v;
#define all(x) x.begin(),x.end()
#define mpt(mp) for(auto it=mp.begin();it!=mp.end();it++)
#define trav(x) for(int i=0;i<(int)x.size();++i)
#define mkp(a,b) make_pair(a,b)
#define sz(x)  (int)x.size()

int noofdig(int N)
{
	return floor(log10(N))+1;
}


ll f(ll a)
{

return 0;

}



void pre()
{

}


bool adj[1010][1010];
bool vis[1010],col[1010];

int n,m;
bool dfs(int node,int c)
{
	vis[node]=1;
	col[node]=c;
	
	for(int i=1;i<=n;++i)
	{
		if(!adj[node][i] and node!=i)
		{
			if(!vis[i])
			{
				if(!dfs(i,!c))
				return false;
			}
			else
			if(col[i]==col[node])
			return false;
		}
			
	}
	
	return true;
}




void solve()
{
   
   cin>>n>>m;
   // debug(n);
   // debug(m);
   memset(vis,0,sizeof(vis));
   memset(adj,false,sizeof(adj));
   
   for(int i=1;i<=m;++i)
   {
   	int u,v;
   	cin>>u>>v;
   	adj[u][v]=true;
   	adj[v][u]=true;
   }
   
   for(int i=1;i<=n;++i)
   {
   	if(!vis[i])
   	{
   		if(!dfs(i,0))
   		{
   			cout<<"NO"<<endl;
   			return;
   		}
   	}
   }
   
   cout<<"YES"<<endl;
   
   


}



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}
}
