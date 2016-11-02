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

bool isLeaf(node *root)
{
    return ( root->left == NULL && root->right == NULL );
}
bool isFull(node *root)
{
    if(root == NULL)
    {
        return false ;
    }
    if(isLeaf(root))
    return true ;

    if(root->left && root->right)
    return isFull(root->left) && isFull(root->right) ;
    else
    return false ;

}
int main()
{
    struct node* root = NULL;
    root = newNode(10);
    root->left = newNode(20);
    root->right = newNode(30);

    root->left->right = newNode(40);
    root->left->left = newNode(50);
    root->right->left = newNode(60);
    root->right->right = newNode(70);

    root->left->left->left = newNode(80);
    root->left->left->right = newNode(90);
    root->left->right->left = newNode(80);
    root->left->right->right = newNode(90);
    root->right->left->left = newNode(80);
    root->right->left->right = newNode(90);
    root->right->right->left = newNode(80);
    root->right->right->right = newNode(90);
    if(isFull(root))
    cout<<"Full binary Tree "<<endl;
    else
    cout<<"go to hell " <<endl ;
    return 0;
}
