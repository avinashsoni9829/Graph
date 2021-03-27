#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* left,right;
};


node* newNode(int v)
{
	  node * curr= new node();
	  
	  if(!curr)
	  { 
	    cout<<"memory exceeded!"<<endl;
	  }
	  
	  curr->data=v;
	  curr->left=curr->right=NULL;
	  return curr;
}

node* insert(node * root,int v)
{ 
	  if(root==NULL)
	  {
	  	  root=newNode(v);
	  	  return root;
	  }
	  
	  queue<node*>q;
	  q.push(root);
	  
	  while(!q.empty())
	  {
	  	   node * curr=q.top();
	  	   q.pop();
	  	   
	  	   if(curr->left!=NULL)
	  	   {
	  	   	  q.push(curr->left);
		   }
		   else
		   {
		   	  curr->left=newNode(v);
		   	  return root;
		   }
		   
		   if(curr->right!=NULL)
		   {
		   	  q.push(curr->right);
		   }
		   else
		   {
		   	  curr->right=newNode(v);
		   	  return root;
		   }
	  }
	  
	  
}


// deletion


void deleteLast(node* root,node* target)
{
	   queue<node*>q;
	   q.push(root);
	   
	   node * curr;
	   
	   while(!q.empty())
	   {
	   	   curr=q.top();
	   	   q.pop();
	   	   
	   	   if(curr==target)
	   	   {
	   	   	  curr=NULL;
			  
			  delete(target);
			  return; 
		     
		   }
		   
		   if(curr->right)
		   {
		   	   if(curr->right==target)
		   	   {
		   	   	  curr->right=NULL;
						delete(target);
						return;  
				}
				else
				{  
				
				  q.push(curr->right);
				}
		   }
		   
		   if(curr->left)
		   {  
		   
		      if(curr->left==target)
		      {
		      	   curr->left=NULL;
		      	   delete(target);
		      	   
		      	   return;
			  }
			  else
			  {
			  	   q.push(curr->left);
			  }
		   }
	   }
}


node* deleteNode(node* root,int key)
{
	 // if root is empty :
	   if(root==NULL)  return NULL;
	   
	   
	  // if only root exist 
	   
	   if(root->left==NULL and root->right==NULL)
	   {
	   	   if(root->data==key)
	   	   {
	   	   	   return NULL;
		   }
		   else
		   {
		   	  return root;
		   }
	   }
	   
	   
	   queue<node*>q;
	   q.push(root);
	   
	   node* curr,key_node=NULL;
	   while(!q.empty())
	   {
	   	  curr=q.top();
	   	  q.pop();
	   	  
	   	  if(curr->data==key)
	   	  {
	   	  	  key_node=curr;
		  }
		  if(curr->left)
		  {
		  	  q.push(curr->left);
		  }
		  
		  if(curr->right)
		  {
		     q.push(curr->right);	  
		  }	
	   }
	   
	   
	   if(key_node!=NULL)
	   {
	      int temp=curr->data;
	      deleteLast(root,curr);
	      key_node->data=temp;
	      
	   }
	   
	   return root;
}







