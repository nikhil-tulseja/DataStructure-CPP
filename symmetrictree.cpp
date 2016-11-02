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
bool isMirror(struct node *root1 , struct node *root2 )
{
    if(root1 == NULL && root2 == NULL )
    return true ;
    if(root1 == NULL || root2 == NULL )
    return false ;
    if(root1->data != root2 ->data )
    return false ;

    return ((isMirror(root1->left,root2->right)&&isMirror(root1->right,root2->left))) ;
}
int main()
{
   // struct node*NewRoot=NULL;
    struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(2);
    root->left->left = newNode(4);
    root->left->right = newNode(3);
//    root->left->right->left=newNode(1);
    root->right->right=newNode(4);
//    root->right->right->right=newNode(7);
        root->right->left=newNode(3);
//                root->right->left->right =newNode(6);
    if(isMirror(root,root))
    cout<<"Symmetric Tree "<<endl ;
    else
    cout<<"Not a symmetric Tree "<<endl;

return 0 ;
}
