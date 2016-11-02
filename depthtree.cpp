#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std ;
typedef struct student st;
struct student {
     int data;
     st *left;
     st *right;

};

 st* newnode( int n)
{
    st *newn= (st*)malloc(sizeof(st));
    newn->data= n;
    newn->left=NULL;
    newn->right=NULL;


    return newn;

}
int depth(st *root)
{
    if(root==NULL)
    return 0;

    if(root->left==NULL && root->right==NULL)
    {
        return 1;
    }
    else{
        int l=depth(root->left);
        int r=depth(root->right);

        if(l>r)
        return (l+1) ;
        else
        return (r+1) ;
            }

}
    int main()
    {
    cout<<"enter the root node for tree1!! "<<endl;
    st *root;
    root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->left->left=newnode(4);
    root->left->left->left->left=newnode(4);
    root->left->left->left->left->left=newnode(4);
    root->left->right=newnode(4);
        int a=depth(root);

        cout<<"a : "<<a<<endl;
    return 0;
    }
