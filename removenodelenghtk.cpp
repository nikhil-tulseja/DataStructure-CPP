#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<queue>
#include<stack>
using namespace std ;
struct node
{
    int data;
    struct node* left, *right;
};
struct node* newNode(int data)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = node->right = NULL;
    return(node);
}
void printInorder(node *root)
{
    if (root)
    {
        printInorder(root->left);
        cout << root->data << " ";
        printInorder(root->right);
    }
}
node * removeNodesUtil(node *root, int l , int k)
{
    if(root == NULL)
    return NULL ;

    root->left = removeNodesUtil(root->left,l+1,k);
    root->right = removeNodesUtil(root->right,l+1,k) ;

    if(root->left == NULL && root->right == NULL && l<k)
    {
        delete(root);
        return NULL ;
    }


    return root ;
}
node * removeNodes(struct node*root, int k)
{
    int path = 0 ;
    return removeNodesUtil(root , 1, k  ) ;
}
int main()
{
    node *root = newNode(2);
    root->left = newNode(7);
    root->right = newNode(5);
    root->left->right = newNode(6);
    root->left->left = newNode(8);
    root->left->right->left = newNode(1);
    root->left->right->right = newNode(11);
    root->right->right = newNode(9);
    root->right->right->left = newNode(4);
    root->right->right->right = newNode(10);
    printInorder(root);
    root = removeNodes(root,4) ;
    cout<<endl;
    printInorder(root);

    return 0;
}

