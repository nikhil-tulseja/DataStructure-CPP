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
node *removeHalfNodes(node *root)
{
    if(root == NULL )
    return NULL ;
    if(root->left == NULL && root->right == NULL)
    return root ;

    root->left = removeHalfNodes(root->left) ;
    root->right = removeHalfNodes(root->right) ;

    if(root->left && root ->right )
    return root ;
    else if(root->left )
    {
        node *temp = root->left;
        delete(root);
        return temp ;
    }
    else
    {
        node *temp = root->right ;
        delete(root);
        return temp ;
    }
    return root ;
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
int main()
{
struct node *root = newNode(2);
    root->left        = newNode(7);
    root->right       = newNode(5);
    root->left->right = newNode(6);
    root->left->right->left=newNode(1);
    root->left->right->right=newNode(11);
    root->right->right=newNode(9);
    root->right->right->left=newNode(4);
        printInorder(root);
    cout<<endl ;
    root = removeHalfNodes(root);
        printInorder(root);
    return 0;
}
