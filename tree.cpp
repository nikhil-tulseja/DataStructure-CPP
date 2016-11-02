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
int size( st* root)
{
 if(root==NULL)
 return 0;

 else
 return (size(root->left)+1 +size(root->right));

}



int main()
{
    cout<<"enter the root node for tree!! "<<endl;
    st *root;
    root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(4);
    cout<<"c: "<<size(root);


    return 0;
}
