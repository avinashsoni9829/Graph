#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node * left,right;
	
	//constructor 
	
	node(int val)
	{
		  data=val;
		  left=NULL;
		  right=NULL;
		  
	}
};


int main()
{
	 	struct node * root=new node(2);
	 	
	 	root->left=new node(3);
	 	root->right=new node(5);
	 	
	 	/* 3 and 5 become left and right children of 2
                    2
                  /    \
                 3       5
               /  \     /  \
            NULL NULL  NULL NULL
    */
	 	 
	 	 
	 	 
	
	  
	  
}
