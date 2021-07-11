#include <iostream>
#include <math.h>

using namespace std;

struct tree{
    int value;
    tree* left;
    tree* right ;
};


tree* insert(tree *root, int value)
{
    if(root == NULL)
    {
        tree* temp = new tree;
        temp->value = value;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }
    else
    {
        if( value < root->value)
        {
            root->left = insert(root->left, value);
        }
        else{
            root->right = insert(root->right, value);
        }
    }
}

int tree_Level(tree *root)
{
    if(root == NULL)
    {
        return -1;
    }
    if(root !=NULL && root->left == NULL && root->right == NULL)
    {
        return 0;
    }
    return 1 + max(tree_Level(root->left), tree_Level(root->right));
}

bool is_AVL_tree(tree *root)
{
	if( root == NULL)
	{
		return true;
	}
	if(  abs( tree_Level(root->left) - tree_Level(root->right)) > 1)
	{
		return false;
	}
	return is_AVL_tree(root->left)&&is_AVL_tree(root->right);
}

int main()
{
	int n;cin>>n;
	tree* root = NULL;
	for(int i = 0; i<n ; i++)
	{
		int value;cin>>value;
		insert(root, value);
	}
	if( is_AVL_tree(root)== true)
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
	
    return 0;
}
