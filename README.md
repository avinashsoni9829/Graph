# Graph

1) Representation of Graph: 

    * adjacency matrix
      -> too much space
      -> adjacency matrix for undirected graph is always symmetric
      -> removal of edge O(1)  -> space complexity  : O(v^2)  -> check for edge  O(1) -> adding a new vertex  O(v^2)
    
    * adjacency list
      -> for n nodes we need n+1 size vector ( makes it cache friendly)
      basic syntax:
      
      
      
/* basic creation of the graph */ 
     
     
     vector<int>adj[n+1];
      while(no.of.edges--)
      {
          int u,v;
          cin>>u>>v;
         adj[u].pb(v);
         adj[v].pb(u);
      }
      
 
 
 /* DFS    */ 
 
 
 
 
 void dfs(int v)
 {
    vis[v]=true;
    cout<<v<<"->";
    for(int i=0;i<a[v].size();++i)
    {
      
      int child=a[v][i];
      if(vis[child]==0)
      dfs(child);
    }
     
 }    
      
