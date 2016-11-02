#include <stdio.h>
#include <stdlib.h>

// A Binary Tree Node
struct Node
{
    int data;
    struct Node *left, *right;
};

// A utility function to create a new Binary Tree Node
struct Node *newNode(int item)
{
    struct Node *temp =  (struct Node *)malloc(sizeof(struct Node));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}
int findLevel(Node *root ,Node *t1, int lev )
{
    if( root == NULL )
    return 0 ;

    if( root == t1 )
    return lev  ;

    int l = findLevel(root->left,t1,lev+1) ;

    if(l != 0 )
    return l ;

    return findLevel(root->right, t1 , lev+1) ;
}
int isSibiling(Node *root,Node *a,Node *b )
{
    if(root == NULL)
    return 0 ;
    return ((root->left == a && root->right == b) || (root->left == b && root->right == a ) || isSibiling(root->left,a,b) || isSibiling(root->right,a,b));
}
bool isCousin(Node *root ,Node *t1,Node *t2)
{
    if((findLevel(root,t1,1) ==  findLevel(root,t2,1))&& !isSibiling(root,a,b));

}
int main()
{
    struct Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->right->right = newNode(15);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);

    struct Node *Node1,*Node2 ;
    Node1 = root->left->left  ;
    Node2 = root->right->right;

    isCousin(root,Node1,Node2)? puts("Yes"): puts("No");

    return 0;
}
