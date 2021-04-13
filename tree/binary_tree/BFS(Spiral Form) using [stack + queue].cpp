#include<bits/stdc++.h>
using namespace std;

vector<int> findSpiral(Node *root)
{
    vector<int>ans;
    
    if(root==NULL)
    return ans;
    
     
     stack<int>s;
     queue<Node*>q;
     
     q.push(root);
     
     bool reverse=true;
     
     while(!q.empty())
     {
           int size=q.size();
           
           while(size)
           {
                Node *temp=q.front();
                q.pop();
                
                if(reverse)
                s.push(temp->data);
                else
                ans.push_back(temp->data);
                
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                
                size-=1;
            }
            
            if(reverse)
            {
                  while(!s.empty())
                  {
                      int v=s.top();
                        ans.push_back(v);
                        
                        s.pop();
                  }
                  
                  
            }
            
            reverse=!(reverse);
     }
     
     
     return ans;
   
   
}

int main()
{
	 
}
