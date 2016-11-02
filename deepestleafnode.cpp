#include <stdio.h>
#include <iostream>
using namespace std;

struct Node
{
    int val;
    struct Node *left, *right;
};

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->val = data;
    temp->left = temp->right =  NULL;
    return temp;
}
void deepestLeftLeafUtil(Node *root , bool isLeft ,int level , int *maxLevel , Node **resPtr)
{
    if(root == NULL)
    return ;

    if(isLeft && root->left == NULL  && root->right == NULL && level > *maxLevel)
    {

            *maxLevel = level ;
            *resPtr = root ;
             return ;
    }
    deepestLeftLeafUtil(root->left, true,level+1 , maxLevel , resPtr);
    deepestLeftLeafUtil(root->right, false,level+1 , maxLevel , resPtr);

}
struct Node *deepestLeftLeaf(struct Node *root)
{
    int level=0,maxlevel=0;
    Node *resPtr;
    deepestLeftLeafUtil(root,false,level,&maxlevel,&resPtr);

    return resPtr  ;
}
int main()
{
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right= newNode(3);
    root->left->left = newNode(4);
    root->right->left = newNode(5);
    root->right->right = newNode(6);
    root->right->left->right = newNode(7);
    root->right->right->right = newNode(8);
    root->right->left->right->left = newNode(9);
    root->right->left->right->left->left = newNode(11);
    root->right->right->right->right = newNode(10);

    Node *result = deepestLeftLeaf(root);
    if (result)
        cout << "The deepest left child is " << result->val;
    else
        cout << "There is no left leaf in the given tree";

    return 0;

}
