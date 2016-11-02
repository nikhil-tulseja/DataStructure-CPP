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
int sametree(st *root1,st *root2)
{
    if(root1==NULL && root2==NULL)
    {
        return 1;
    }
    else if(root1!=NULL && root2!=NULL)
            {
                return
                ((root1->data==root2->data)&&
                    (sametree(root1->left,root2->left))&&
                    (sametree(root1->right,root2->right))
                 );
                 }
            else
            {
                return 0;

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
    root->left->right=newnode(4);

    st*root1;
    root1=newnode(1);
    root1->left=newnode(2);
    root1->right=newnode(3);
    root1->left->left=newnode(4);
    root1->left->right=newnode(4);

    int c=sametree(root,root);
    cout<<"C : "<<c<<endl;
    return 0;
}
