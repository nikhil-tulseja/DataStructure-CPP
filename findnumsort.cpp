#include<iostream>
#include<stdlib.h>
using namespace std ;
struct tnode
{
    int data ;
    struct tnode *left ;
    struct tnode *right ;
};
struct tnode *newnode(int data )
{
    struct tnode *temp = (struct tnode *)malloc(sizeof(struct tnode));
    temp->data = data ;
    temp->left = NULL ;
    temp->right = NULL ;
    return temp ;
}
void inorder(struct tnode *root)
{
    struct tnode *pre , *current ;
    current = root ;
    while(current!=NULL)
    {
        if(current->left==NULL)
         {
             cout<<current->data ;
             current=current->right ;
         }
        else
          {
            pre = current->left  ;
            while(pre->right != NULL && pre->right != current)
            pre = pre->right ;

            if(pre->right == NULL)
            {
                pre->right = current ;
                current=current->left ;
            }
            else
            {
                pre->right=NULL ;
                cout<<current->data<<" ";
                current=current->right ;
            }
            }
            }
        }
/* Driver program to test above functions*/
int main()
{

  /* Constructed binary tree is
            1
          /   \
        2      3
      /  \
    4     5
  */
  struct tnode *root = newnode(1);
  root->left        = newnode(2);
  root->right       = newnode(3);
  root->left->left  = newnode(4);
  root->left->right = newnode(5);
  root->left->right->right = newnode(5);
  root->left->right ->right->right = newnode(5);
 inorder(root);

//  getchar();
  return 0;
}
