#include <iostream>
 
using namespace std;
int adj[1001][1001] = {0};
 
int main() {
	int x,y,n,m;
	cin>>n>>m;
	
	for(int i=0; i<m; i++)
	{
		cin>>x>>y;
 
		adj[x][y]= 1;
		adj[y][x]= 1;
	}
	int q,a,b;
	cin>>q;
	for(int i=0; i<q; i++)
	{
		cin>>a>>b;
		if(adj[a][b]==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;		
}
