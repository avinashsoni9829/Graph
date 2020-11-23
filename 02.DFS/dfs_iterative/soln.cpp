/* iterative Dfs  */



 void dfsiterative(int s)
 {
 	vector<bool>vis(false);
 	stack<int>st;
 	
 	st.push(s);
 	
 	while(!s.empty())
 	{
 		int curr=st.top();
 		st.pop();
 		
 		if(!vis[curr])
 		{
 			cout<<curr<<" ";
 			vis[curr]=true;
 		}
 		
 		// check for the adjancet nodes in the adjacency list
 		
 		for(int i=adj[curr].begin();i!=adj[curr].end();i++)
 		{
 			if(!vis[*i])
 			st.push(*i);
 		}
 	}
 	
 	
 } 
