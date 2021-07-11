#include <iostream>

using namespace std;


//Create binary tree
struct node{
	int data;
	struct node* left;
	struct node* right;
};

//Create root
struct node root;


struct node* makeNode(int value)
{
	struct node *temp = new node[sizeof(node)];
	temp->data = value;
	temp->left = temp->right = NULL;
	return temp;
}

//Calculate height/depth of tree
int maxDepth(struct node* node)
{
	if(node == NULL)
	{
		return 0;
	}
	else
	{
		int lDepth = maxDepth(node->left);
		int rDepth = maxDepth(node->right);
		
		if( lDepth > rDepth)
		{
			return (lDepth +1);
		}
		else
		{
			return (rDepth +1);
		}
	}
}

int main()
{
	
	return 0;
}
