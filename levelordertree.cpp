#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std ;
struct tree
{
    int data ;
    struct tree *left ;
    struct tree *right ;
} ;
struct tree *newnode(int data)
{
    struct tree *node = (struct tree *)malloc(sizeof(struct tree));
    node->data = data ;
    node ->left = NULL ;
    node->right = NULL ;

return node ;
}
int height(struct tree *root)
{
    if(root==NULL)
    return 0 ;
    else
    {
    int l = height(root->left) ;
    int r = height(root->right) ;
        if(l>r)
        return l+1 ;
        else
        return r+1 ;

    }

}
void printgivenlevel(struct tree *root,int level)
{
    if(root==NULL)
    return ;
    if(level==1)
    {
        cout<<root->data<<" " ;

    }
    else if(level >1 )
    {
        printgivenlevel(root->left , level -1 );
        printgivenlevel(root->right , level -1 );
    }

}
void printlevelorder(struct tree *root)
{
    int h = height(root); // calculate height of tree
    cout<<"height of tree is : "<< h <<endl ;
    for(int i=1 ; i<=h ; i++)
    {
            printgivenlevel(root , i ) ;
    }

}

int main()
{
    cout<<"entering main : "<<endl ;
    struct tree *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4) ;
    root->left->right = newnode(5) ;
    root->left->left->left = newnode(8) ;
    cout<<"entering main : "<<endl ;
    printlevelorder(root) ;
    return 0 ;
}

