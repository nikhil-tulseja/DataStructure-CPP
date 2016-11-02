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
int sumofleft(struct node *root)
{
//    static int sum = 0 ;
    if(root == NULL )
    return 0;
//    root->data =  sum ;

    int l = sumofleft(root->left) ;
    int r = sumofleft(root->right);
//    sum = sum + root->data ;

    root->data= root->data + l ;

    return root->data + r ;
}
void inorder(struct node *root)
{
    if(root == NULL )
    return ;
    inorder(root->left) ;
    cout<<root->data<<" " ;
    inorder(root->right) ;


}
int main()
{
   // struct node*NewRoot=NULL;
    struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
//    root->left->right = newNode(6);
//    root->left->right->left=newNode(1);
//    root->left->right->right=newNode(11);
//    root->right->right=newNode(9);
//    root->right->right->left=newNode(4);

////    cout<<"Maximum element is \n"<< findMax(root)<<endl;
//    if(iterativein(root , 12 ))
//    cout<< "search for Element is successful"<<endl ;
//        iterativepost(root) ;
    inorder(root);
    cout<<endl ;
    sumofleft(root) ;
    cout<<endl;
    inorder(root);
    cout<<endl ;

    return 0;
}

