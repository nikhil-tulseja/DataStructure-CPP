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
void levelorder(struct node *root)
{
    if(root == NULL)
    return ;
    queue<node *> q ;
    q.push(root) ;

    while(q.empty()== false )
    {
        struct node *nodet = q.front() ;
        cout<<nodet->data<<" ";
        q.pop();
        if(nodet->left != NULL )
        q.push(nodet->left);
        if(nodet->right != NULL)
        q.push(nodet->right);
    }
    return ;
}
void inorder(struct node *root)
{
    struct node *curr = root ;
    if(curr == NULL )
    return ;

    stack<node *>st ;
    st.push(curr);
    bool done = false ;
    while(!done)
    {
        if(curr)
        {
            cout<<"current node : "<<curr->data<<" : psuhed !! "<<endl ;
            st.push(curr);
            curr=curr->left ;
        }
        else
        {
            if(st.empty() == false)
            {
                curr = st.top();

                st.pop();
                cout<<curr->data<<"  is popped !! "<<endl  ;
             //   if(curr->right)
                curr=curr->right ;
            }
            else
            done = true ;
        }
    }

}
struct node *newNode(int data )
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data ;
    temp->left=NULL ;
    temp->right=NULL;

    return temp ;
}
int main(void)
{
//    struct node*NewRoot=NULL;
    struct node *root = newNode(2);
    root->left        = newNode(7);
    root->right       = newNode(5);
    root->left->right = newNode(6);
    root->left->right->left=newNode(1);
    root->left->right->right=newNode(11);
    root->right->right=newNode(9);
    root->right->right->left=newNode(4);
    //levelorder(root);
    inorder(root);
    return 0 ;
}
