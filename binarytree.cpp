#include <iostream>

using namespace std;


struct tree{
    int value;
    tree *left;
    tree *right;
};

tree *insert(tree *root, int value)
{
    if(root == NULL)
    {
        tree *temp = new tree;
        temp ->value = value;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }
    else
    {
        if(value < root->value)
        {
            root->left = insert(root->left, value);
        }
        else
        {
            root->right = insert(root->right, value);
        }
    }
}

void printTree_root_(tree *root)
{
    if(root != NULL)
    {
        printTree_root_(root->left);
        cout<<root->value<<" ";
        printTree_root_(root->right);
    }
}

int number_leaf(tree *root)
{
    if(root!= NULL &&root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    if(root!= NULL &&root->left == NULL && root->right != NULL)
    {
    	return number_leaf(root ->right);
	}
	if(root!= NULL &&root->left != NULL && root->right == NULL)
    {
    	return number_leaf(root ->left);
	}

    return number_leaf(root->left) + number_leaf(root->right);
    
}

int main()
{
    int n;
    cin>>n;
    tree *root = NULL;
    for(int i = 0; i<n; i++)
    {
        int value;cin>>value;
        root = insert(root, value);
    }
    cout<<number_leaf(root);
    return 0;
}
