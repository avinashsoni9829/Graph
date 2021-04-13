#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* left,*right;
};

node* newNode(int data)
{
    node *temp = new node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void BFS(struct node* root)
{
	  if(root==NULL) return;
	  
	  queue<node*>q;
	  q.push(root);
	  
	  while(!q.empty())
	  {  
	     node* curr=q.front();
	     cout<<curr->data<<" ";
	     q.pop();
	     
	     if(curr->left) q.push(curr->left);
	     if(curr->right) q.push(curr->right);
	     
	  }
}

int main()
{
	  node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
 
    cout << "Level Order traversal of binary tree is \n";
    BFS(root);
    return 0;
}


