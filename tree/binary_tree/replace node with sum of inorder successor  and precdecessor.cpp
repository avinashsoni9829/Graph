#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* left;
	node* right;
	
};


struct node* newnode(int val)
{
	  struct node* nnode=(struct node*)malloc(sizeof(struct node));
	  
	  nnode->data=val;
	  nnode->left=nnode->right=NULL;
	  
	  return nnode;
}

void StoreInorder(struct node* root,vector<int>&a)
{
	  	if(!root) return;
	  	
	  	StoreInorder(root->left,a);
	  	a.push_back(root->data);
	  	StoreInorder(root->right,a);
}

void f(struct node* root,vector<int>a,int* i)
{
	   if(!root) return;
	   
	   f(root->left,a,i);
	   root->data=a[*i-1]+a[*i+1];
	   ++*i;
	   f(root->right,a,i);
}


void helper(struct node* root)
{
	  if(!root) return;
	  
	  vector<int>a;
	  
	  a.push_back(0);
	  
	  StoreInorder(root,a);
	  
	  a.push_back(0);
	  
	  int i=1;
	  
	  f(root,a,&i);
}

void preorderTraversal(struct node* root)
{
    // if root is NULL
    if (!root)
        return;
  
    // first print the data of node
    cout << root->data << " ";
  
    // then recur on left subtree
    preorderTraversal(root->left);
  
    // now recur on right subtree
    preorderTraversal(root->right);
}

int main()
{
	 struct node* root = newnode(1); /*         1        */
    root->left = newnode(2);        /*       /   \      */
    root->right = newnode(3);       /*     2      3     */
    root->left->left = newnode(4);  /*    /  \  /   \   */
    root->left->right = newnode(5); /*   4   5  6   7   */
    root->right->left = newnode(6);
    root->right->right = newnode(7);
	
	 cout << "Preorder Traversal before tree modification: ";
    preorderTraversal(root);
	
	helper(root); 
	
	 cout << "\nPreorder Traversal after tree modification: ";
    preorderTraversal(root);
	
	return 0;
	  
}
