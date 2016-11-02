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
void printLevels(struct node *root, int l , int h)
{
    queue<node *> q ;
    q.push(root);
    int level =1  ;
    node *marker = new node ;
    q.push(marker);
    while(!q.empty())
    {
    node *n = q.front();
    q.pop();
    if(n == marker)
    {
        level++ ;
        if(level > h )
        break ;
        q.push(marker);
    }
    else
    {
    if(n->left)
    q.push(n->left);
    if(n->right)
    q.push(n->right) ;
    if(level >= l && level <= h)
    cout<<n->data<<endl ;
    }
}
}

int main()
{
    // Let us construct the BST shown in the above figure
    struct node *root        = newNode(20);
    root->left               = newNode(8);
    root->right              = newNode(22);
    root->left->left         = newNode(4);
    root->left->right        = newNode(12);
    root->left->right->left  = newNode(10);
    root->left->right->right = newNode(14);

    cout << "Level Order traversal between given two levels is";
    printLevels(root, 2, 3);

    return 0;
}
