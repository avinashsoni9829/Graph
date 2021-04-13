#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left,*right;
};


void Spiral(node *root)
{
	  if(root==NULL) return;
	  
	  stack<node*>s1,s2;
	  
	  s1.push(root);
	  
	  while(!(s1.empty()) or !(s2.empty()))
	  {
	  	   while(!(s1.empty()))
	  	   {
	  	   	  
		       node *temp=s1.top();
		       
		       cout<<temp->data<<" ";
		       
		       s1.pop();
		       
		       if(temp->right) s2.push(temp->right);
		       
		       if(temp->left) s2.push(temp->left);
		   
		   }
		   
		   while(!(s2.empty()))
		   {
		   	   node *temp=s2.top();
		   	   cout<<temp->data<<" ";
		   	   s2.pop();
		   	   
		   	   if(temp->left)s1.push(temp->left);
		   	   if(temp->right)s1.push(temp->right);
		   }
	  }
}

int main()
{
	  
}
