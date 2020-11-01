#include <bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int e,v;
	    cin>>v>>e;
	    vector<vector<int > > a(v);
	    int x,y;
	    for(int i=0;i<e;i++)
	    {
	       cin>>x>>y;
	       a[x].push_back(y);
	       a[y].push_back(x);
	    }
	    for(int i=0;i<v;i++)
	    {
	        cout<<i;
	        for(int j=0;j<a[i].size();j++)
	        {
	            cout<<"-> "<<a[i][j];
	        }
	        cout<<endl;
	
	    }
	    
	}
	return 0;
}
