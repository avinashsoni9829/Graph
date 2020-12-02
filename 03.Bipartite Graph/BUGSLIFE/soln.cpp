#include<bits/stdc++.h>
using namespace std;

int vis[2001],col[2001];
vector <int> ar[2001];


bool dfs(int node,int c)
{
    vis[node]=1;
    col[node]=c;
    
    for(int i=0;i<ar[node].size();i++)
    {
        int child=ar[node][i];
        if(vis[child]==0){ bool res=dfs(child,c^1); if(res==false)return false;}
        else            { if(col[child]==col[node])return false;}
        
    }
    return true;
}

int main()
{
    int t,i,m,n,a,b;
    
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        cin>>n>>m;
        for(i=1;i<=n;i++){ vis[i]=0; col[i]=0; ar[i].clear();}
        
        for(i=1;i<=m;i++)
        {
            cin>>a>>b;
            ar[a].push_back(b);
            ar[b].push_back(a);
        }
        
        bool flag=true;
        
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                bool res=dfs(i,0);
                
                if(res==false){
                flag=false;break;}
            }
            
        }
  //cout<<flag<<endl;
  cout<<"Scenario #"<<tc<<":"<<endl;
  if(flag==true)cout<<"No suspicious bugs found!"<<endl;
  else          cout<<"Suspicious bugs found!"<<endl;
  


    }
    
  return 0;
}
