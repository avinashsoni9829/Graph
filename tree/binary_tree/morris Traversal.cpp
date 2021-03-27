#include<bits/stdc++.h>
using namespace std;


struct node {
	int data;
	
	node* left,right;
};


void morrisTraversal(node*  root)
{
	  	node* curr,pre;
	  	
	  	if(root==NULL)
	  	return;
	  	
	  	curr=root;
	  	
	  	while(curr!=NULL)
	  	{
	  	    
			  if(curr->left==NULL)
			  {
			  	cout<<curr->data<<" ";
				curr=curr->right;
			  }
			  else
			  {
			  	// find inorder precedecessor
				  
				  pre=curr->left;
				  
				  while(pre->right!=NULL and pre->right!=curr)
				  {
				  	 pre=pre->right;  
			        
				  }
				  
				  if(pre->right==NULL)
				  {
				  	   // make a link
				  	   pre->right=curr;
				  	   curr=curr->left;
				  	   
				  }
				  else
				  {
				  	  pre->right=NULL;
				  	  cout<<curr->data<<" ";
				  	  curr=curr->right;
				  	  
				  }
			  	 
			  }
			  	  
	      
	    
		
		}
	  	
}
