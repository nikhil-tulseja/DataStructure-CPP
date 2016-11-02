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
bool function(node *root , int &count)
{
    if(root == NULL)
    return true ;

    bool left = function(root->left, count) ;
    bool right = function(root->right, count) ;

    if(left == false || right == false )
    return false ;

    if(root->left && root->data != root->left->data)
    return false ;

    if(root->right && root->data != root->right->data)
    return false ;

    count ++ ;

    return true ;
}
int singlevalued(struct node *root)
{
    int count =0 ;
    function(root , count);

    return count ;
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
    int answer = singlevalued(root);
    cout<<"Final product value = "<<answer<<endl;

    return 0;
}
