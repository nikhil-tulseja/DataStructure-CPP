#include<iostream>
#include<stdlib.h>

using namespace std ;

struct node
{
    int data ;
    struct node *left ;
    struct node *right ;
};
struct node *newnode(int data )
{
    struct node *temp = (struct node *)malloc(sizeof(struct node)) ;
    temp->data = data ;
    temp->left = NULL ;
    temp->right= NULL ;
    return temp ;
}
bool checklevel(struct node *root,int leaf, int *level)
{
        if(root == NULL)
        return true ;
        if(root->left == NULL && root->right == NULL)
        {
            if(*level == 0)
            {
                *level = leaf ;
            }
//            else
            return *level == leaf ;

        }

        return checklevel(root->left,leaf+1,level) && checklevel(root->right,leaf+1,level) ;

}
int inorder(struct node *root,int *max )
{
    if(root==NULL)
    return -1;

    cout<<"root ka data : "<<root->data <<endl ;
    inorder(root->left,max);

    if(root->data > *max )
    {
        *max = root->data ;

    }
    inorder(root->right,max);
    return *max ;
}
int main()
{
    int level=0,leaf=0,max=0;
    struct node *root = newnode(10);
    root->left = newnode(5);
    root->left->left = newnode(3);
    root->left->right = newnode(9);
    root->left->left->left =newnode(1);
    root->left->right->left=newnode(1);
    root->left->right->left->right=newnode(11);

    int haha = inorder(root,&max);
    cout<<haha<<endl;
//    if (checklevel(root,level,&leaf))
//        cout<<"Leaves are at same level"<<endl;
//    else
//        cout<<"Leaves are not at same level"<<endl;

//    getchar();

    return 0;
//    checklevel(root,level *leaf);

}
