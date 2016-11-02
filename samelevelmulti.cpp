#include<queue>
#include<iostream>
#include<stdlib.h>
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
bool isleaf(tree *root)
{
    return (root->left == NULL && root->right == NULL )  ;
}
void printlevelorder(tree *root)
{
    int level , sum ;
    if(root == NULL)
    {
        cout<<"Empty Tree !! "<<endl ;
        return ;
    }
    queue <tree *> q ;
    q.push(root);
    tree *temp ;
    sum = 1 ;
    while(1)
    {
        bool flag =false ;
        level = 0 ;
      int ncount = q.size();

         if(ncount == 0 )
            break ;

    while(ncount > 0 )
    {
        temp = q.front();
        q.pop() ;

        if(isleaf(temp))
        {
            flag = true ;
            level += temp->data ;
        }
        if(temp->left)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right) ;
        ncount-- ;
    }
     if(flag)
     {
         sum = sum*level ;
     }
    }
    cout<<"sum Final is : "<<sum <<endl ;
}
int main()
{
    cout<<"entering main : "<<endl ;
    struct tree *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4) ;
    root->left->right = newnode(5) ;
//    root->left->left->left = newnode(8) ;
    cout<<"entering main : "<<endl ;
    printlevelorder(root) ;
    return 0 ;

}
