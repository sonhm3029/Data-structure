#include <iostream>
#include <math.h>
using namespace std;


struct tree{
    int value;
    tree* left;
    tree* right;
};


tree* insert(tree* root, int value)
{
    if(root == NULL)
    {
        tree* new_root = new tree;
        new_root->value = value;
        new_root->left = NULL;
        new_root->right = NULL;
        return new_root;
    }
    else
    {
        if(value <root->value)
        {
            root->left = insert(root->left, value);
        }
        else{
            root->right = insert(root->right, value);
        }
    }
}

int tree_level(tree* root)
{
    if(root == NULL)
    {
        return -1;
    }
    if(root !=NULL && root->left == NULL && root->right == NULL)
    {
        return 0;
    }
    return 1+ max(tree_level(tree->left), tree_level(tree->right));
}

bool is_AVL(tree* root)
{
    if( root == NULL)
    {
        return true;
    }
    if(abs(tree_level(root->left) - tree_level(root->right)) > 1)
    {
        return false;
    }
    return is_AVL(root->left) && is_AVL(root->right);
}

int main()
{
    int n; cin>>n;
    tree* root = NULL;
    for(int i = 0; i<n; i++)
    {
        int value;
        cin>>value;
        root = insert(root, value);

    }
    cout<<is_AVL(root);
    return 0;
}
