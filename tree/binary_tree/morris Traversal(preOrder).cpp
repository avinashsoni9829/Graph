
// morris traversal for pre order
#include<bits/stdc++.h>
using namespace std;



void morrisPreorder(node * root)
{
	 while(root)
	 {
	 	  if(root->left==NULL)
	 	  {
	 	  	    // process 
				 cout<<root->data<<" ";
			    // move right	 
				 root=root->right; 
	         
		  }
		  else
	  	  {
	           // finding inorder predecessor
			   
			   node* curr= root->left;
			   
			   while(curr->right and curr->right!=root)
			   curr=curr->right;
			   
			   if(curr->right==root)
			   {
			      curr->right=NULL;
			      root=root->right;
			   	
			   }
			   else
			   {
			   	 // processs
			   	  cout<<root->data<<' ';
			   	  
			   	  curr->right=root;
			   	  
			   	  root=root->left;
			   	  
                 
    			}  	  	   
		  	   
		  }
	 }
	  
}


