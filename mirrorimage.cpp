#include<iostream>
#include<stdlib.h>
#include<queue>
#include<stack>
using namespace std ;
struct node
{
    int data ;
    struct node *left ;
    struct node *right ;

};
struct node *newNode(int data )
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data ;
    temp->left =NULL ;
    temp->right =NULL;

    return temp ;
}
bool ismirror(struct node *t1 , struct node *t2 )
{
    if(t1 == NULL && t2 == NULL )
        return true ;
    if( (t1)&&(t2)&& (t1->data == t2->data ))
    {
        return ismirror(t1->left,t2->right) && ismirror(t1->right , t2->left) ;
    }
    return false ;
}
void swap(struct node *t1 , struct node *t2 )
{
    struct node * temp ;
    temp = t2 ;
//    if(t2)
    t2 = t1 ;
//    else
//    {
//        *t1 = NULL ;
//        *
//    }
//    if(t1)
    t1 = temp ;
}
void mirror(struct node *t1 )
{
    if(t1 == NULL )
        return ;

     mirror(t1->left) ;
     mirror(t1->right);

        struct node *temp  ;
        temp = t1->left ;
        t1->left = t1->right ;
        t1->right = temp ;

}
void inorder(struct node *root)
{
    if(root)
    {
        inorder(root->left);
        cout<<root->data <<" ";
        inorder(root->right);
    }
}

int main(void)
{
//    struct node*NewRoot=NULL;
    struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
//   root->left->left->left  = newNode(7);
    root->left->right = newNode(5);
    //root->left->right->left=newNode(1);
//    root->left->right->right=newNode(11);
//    root->right->right=newNode(3);
//    root->right->right->right=newNode(7);
    root->right->left=newNode(6);
        root->right->left->left=newNode(7);
        root->right->left->left->right=newNode(8);
    //levelorder(root);

//    inorderwithoutstack(root);
//    if(ismirror(root,root))
//    {
//        cout<<" is a mirror image in itself !! "<<endl ;
//    }
//    else
//        cout<<" NO "<<endl;
    inorder(root);
    cout<<endl ;
    mirror(root);
    inorder(root);
    return 0 ;
}
