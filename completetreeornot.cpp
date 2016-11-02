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
bool isLeaf(struct node *root)
{
    return (root->left == NULL && root->right == NULL ) ;
}
bool isFull(struct node *root)
{
    return root->left && root->right ;
}
bool isComplete(struct node *root )
{
    queue<node *> q ;
    q.push(root) ;
    bool flag = false ;
    while(q.empty() == false )
    {
        node *node = q.front() ;
        q.pop();
       /* if(isFull(node))
        {
            q.push_back(node->left);
            q.push_back(node->right) ;
        }*/
        if(flag)
        {
            if(isLeaf(node) == false)
            return false ;

            if(node->left)
            if(isLeaf(node->left) == false )
            return false ;
            if(node->right)
            if(isLeaf(node->right) == false )
            return false ;

        }
        if(node->left == NULL )
        {
            if(node->right)
            return false ;

        }
        if(node->left)
        q.push(node->left) ;
        if(node->right)
        q.push(node->right);

        if(isFull(node) == false)
        flag  = true ;






    }
    return true ;
}
bool isCompleteRecursion(struct node *root , int i , int count)
{
    if(root == NULL )
    return true ;
    if(i >= count )
    return false ;

    return (isCompleteRecursion(root->left,2*i+1,count) && isCompleteRecursion(root->right,2*i+2,count)) ;

}
int numofnodes(struct node *root)
{
    static int count = 0 ;
    if(root == NULL)
    return 0 ;
    count = 1 + numofnodes(root->left) + numofnodes(root->right) ;

    return count ;
}
/*
void inordercount(struct node *root , int count)
{
    if(root == NULL)
    return ;

    inordercount(root->left , count ) ;
    count ++ ;
    inordercount
} */
int main()
{
    struct node *root  = newNode(1);
    root->left       = newNode(2);
    root->right          = newNode(3);
    root->left->right    = newNode(4);
    root->left->left  = newNode(25) ;
      root->right->right = newNode(5);
      root->right->left= newNode(6);
      int count = numofnodes(root);
      cout<<"count : "<<count <<endl ;
    if(isCompleteRecursion(root,0,count))
    cout<<"Given tree is a Complete Tree "<<endl ;
    else
    cout<<"Not a Complete Tree "<<endl ;
    return 0;
}

