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
void sumOfLeftLeaves(node *root, int &sum)
{

   if(root == NULL)
   return ;

   sumOfLeftLeaves(root->left,sum);
   sumOfLeftLeaves(root->right,sum) ;


   if(root->left && isLeaf(root->left))
   sum = sum+ root->left->data ;

}
int sumOfLeaves(node *root)
{
    int sum =0 ;
    sumOfLeftLeaves(root,sum);

    return sum ;

}
int main()
{
    struct node *root         = newNode(20);
    root->left                = newNode(9);
    root->right               = newNode(49);
    root->right->left         = newNode(23);
    root->right->right        = newNode(52);
    root->right->right->left  = newNode(50);
    root->left->left          = newNode(5);
    root->left->right         = newNode(12);
    root->left->right->right  = newNode(12);
    int answer = sumOfLeaves(root);
    cout<<"Final product value = "<<answer<<endl;

    return 0;
}
