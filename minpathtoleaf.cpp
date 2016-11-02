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
int min(int a ,int b)
{
    return a>b?b:a ;
}
int minpathtoleaf(struct node *root)
{
    if(root == NULL )
    return 0 ;
    if(root->left == NULL && root->right == NULL )
    return 1 ;

    return min(minpathtoleaf(root->left) , minpathtoleaf(root->right))+1 ;

}
int minpathmodify(struct node * root)
{
    if(root == NULL )
    return 0 ;
    queue<node*> q;
    q.push(root) ;
    int depth =0 ;
    while(q.empty() == false )
    {
        int size = q.size() ;
        depth ++ ;
        while(size)
        {


        node *node = q.front() ;
        q.pop() ;

        if(node->right == NULL && node ->left == NULL )
        return depth ;
        if(node->left)
        {
        q.push(node->left) ;
        }

        if(node->right)
        {
        q.push(node->right) ;
        }
        size -- ;
    }
    }
}
int main()
{
   // struct node*NewRoot=NULL;
    struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->right = newNode(5);
    root->left->right->left=newNode(1);
    root->right->right=newNode(7);
    root->right->right->right=newNode(7);
        root->right->left=newNode(6);
                root->right->left->right =newNode(6);
    cout<<endl;
    int res = 0 ;
//    maxpathsum(root, res) ;
//    cout<<res<<endl ;
//    res = minpathtoleaf(root) ;

    res = minpathmodify(root) ;
    cout<<res<<endl ;
return 0 ;
}
