/* minimum number of steps to reach a number */


#include<bits/stdc++.h>
using namespace std;


int dfs(int src,int steps,int des)
{
	if(abs(src)>des)
	return INT_MAX;
	
	if(src==des)
	return steps;
	
	int go_forward=dfs(src+steps+1,step+1,des);
	int go_backward=dfs(src-steps-1,step+1,des);
	
	return min(go_forward,go_backward);
}

int main()
{
	int des=11;
	
	cout<<dfs(0,0,des)<<endl;
	
}
