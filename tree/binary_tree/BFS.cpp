#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* left,*right;
};

struct node* newNode(int data)
{
    struct node* node = (struct node*)
                        malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
 
    return(node);
}

int height(struct node* root)
{
	  if(root==NULL)
	  return 0;
	  
	return max(height(root->left),height(root->right))+ 1;
}

void printLevel(struct node* root,int h)
{ 
   if(root==NULL) return;
   
   if(h==1)
   cout<<root->data<<" ";
   else
   {
   	  printLevel(root->left,h-1);
   	  printLevel(root->right,h-1);
   }
   
   
   
}

void BFS(struct node* root)
{
	  int h=height(root);
	  for(int i=1;i<=h;++i)
	  printLevel(root,i);
	  
}

int main()
{
	struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);
 
    printf("Level Order traversal of binary tree is \n");
    BFS(root);
	  
}
