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
int max(int a , int b)
{
    return (a>b?a:b) ;
}
int maxpathsum(struct node *root ,int &res)
{
    if(root == NULL)
    return 0 ;

    int l = maxpathsum(root->left ,res) ;
    int r = maxpathsum(root->right,res) ;

    int ms = max(max(l,r)+root->data ,root->data) ;
    int mt = max(ms , l+r+root->data) ;

    res = max(res, mt) ;

    return ms ;
}
int main()
{
   // struct node*NewRoot=NULL;
    struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->right = newNode(5);
//    root->left->right->left=newNode(1);
    root->left->left=newNode(4);
    root->right->right=newNode(7);
    root->right->left=newNode(6);

    cout<<endl;
    int res = 0 ;
    maxpathsum(root, res) ;
    cout<<res<<endl ;


return 0 ;
}
