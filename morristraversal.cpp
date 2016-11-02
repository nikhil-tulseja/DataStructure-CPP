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
void morristraversal(struct node *root)
{
    struct node *current = root ;

    while(current)
    {
        if(current->left == NULL )
        {
            cout<<current->data<<" ";
            current= current->right ;

        }
        else
        {
            root = current->left ;
            while(root->right && root->right != current)
            {
                root = root->right ;
            }
            if(root->right == NULL)
            {
            root->right = current ;
            current = current->left ;
            }
            else
            {
                root->right = NULL ;
                cout<<current->data <<" ";
                current = current ->right ;
            }
        }
    }

}
void iterativepostonestack(struct node *root)
{
    struct node *current ,*temp ;
    stack<node*>s  ;
    current = root ;
    do
    {
        while(current)
        {
            if(current->right)
            s.push(current->right);
            s.push(current) ;
            current = current->left ;
        }
        temp = s.top() ;
        s.pop() ;
//        cout<<" TEMP : "<<temp->data << endl ;
//        node *node = s.top();
//        cout<<"NOW TOP ELEMENT : "<<  node->data<<endl ;
        if(temp->right != NULL && s.empty() == false && temp->right == s.top())
        {
            current = s.top() ;
//            cout<<"current after leftmost NULL : "<<current->data<<" ";
            s.pop();
            s.push(temp);
        }

        else
        {
            cout<<temp->data<<" ";
//            temp = NULL ;
        }



    }while(s.empty() == false);



}
int main()
{
   // struct node*NewRoot=NULL;
    struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->right = newNode(5);
//    root->left->right->left=newNode(1);
    root->left->left=newNode(4);
    root->right->right=newNode(7);
    root->right->left=newNode(6);
    morristraversal(root) ;
    cout<<endl;
    iterativepostonestack(root);

return 0 ;
}
