#include<bits/stdc++.h>
using namespace std;


struct node{
	int data;
	node *left,*right;
	
	
};


int height(node *root)
{
	  if(root==NULL) return 0;
	  
	  return max(height(root->left),height(root->right))+1;
}

void printLevel(node *root,int h,int flag)
{
	   if(root==NULL) return;
	   if(h==1)
	   cout<<root->data<<" ";
	   else
	   if(h>1)
	   {
	   	   if(flag)
	   	   {
	   	   	  printLevel(root->left,h-1,flag);
	   	   	  printLevel(root->right,h-1,flag);
		   }
		   else
		   {
		   	 printLevel(root->right,h-1,flag);
		   	 printLevel(root->left,h-1,flag);
		   }
	   }
}

void helper(node *root)
{
	  int h=height(root);
	  
	  int flag=0;
	  
	  for(int i=1;i<=h;++i)
	  {
	  	  printLevel(root,i,flag);
	  	  flag^=1;
	  	  
	  }
}


int main()
{
	  
}

