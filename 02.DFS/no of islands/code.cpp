// no is island 

#include<bits/stdc++.h>
using namespace std;
#define r 5
#define c 5


int check(int m[][c],int row,int col,bool vis[][c])
{
	return (row>=0 and (row<r) and col>=0 an col<c and m[row][col] and !vis[row][col]);
	
} 


void dfs(int m[][c],int row,int col,bool vis[][c])
{
	static int dx[]={-1,-1,-1,0,0,1,1,1};
	static int dy[]={-1,0,1,-1,1,-1,0,1};
	
	vis[r][c]=true;
	
	for(int k=0;k<8;++k)
	{
		if(check(m,row+dx[k],col+dy[k],vis))
		{
			dfs(m,row+dx[k],col+dy[k],vis);
		}
	}
}




int countisland(int m[][c])
{
	bool vis[r][c];
	memset(vis,0,sizeof(vis));
	
	int cnt=0;
	
	for(int i=0;i<r;++i)
	{
		for(int j=0;j<col;++j)
		{
			if(m[i][j]&&!vis[i][j])
			{
				dfs(m,i,j,vis);
				++cnt;
			}
		}
	}
	
}





int main()
{
	 int m[][c] = { { 1, 1, 0, 0, 0 }, 
                     { 0, 1, 0, 0, 1 }, 
                     { 1, 0, 0, 1, 1 }, 
                     { 0, 0, 0, 0, 0 }, 
                     { 1, 0, 1, 0, 1 } };
}
