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
int sumAndMultiplyLevelData(struct node *root)
{
    queue <node*>q ;
    q.push(root);
    int ans = 1, sum=0 ;

    while(q.empty() == false)
        {
            sum =0 ;
            bool leafFound = false ;
        int size = q.size() ;
        cout<<"Queue ka size "<<size <<endl ;
        while(size)
        {

            node *node = q.front() ;
            q.pop() ;
            cout<<"Popped Node is : "<<node->data <<endl ;
            if(node->left)
            {
                q.push(node->left) ;
            }
            if(node->right)
            {
                q.push(node->right) ;
            }
            if(node->left == NULL && node->right == NULL )
            {
                cout<<"Leaf node is : "<<node->data<<endl ;
                sum = sum + node ->data ;
                leafFound = true ;
            }

            size--;
        }
        if(leafFound )
        ans = ans*sum ;

    }
    return ans ;
}
int main()
{
    node *root = newNode(2);
    root->left = newNode(7);
    root->right = newNode(5);
    root->left->right = newNode(6);
    root->left->left = newNode(8);
    root->left->right->left = newNode(1);
    root->left->right->right = newNode(11);
    root->right->right = newNode(9);
    root->right->right->left = newNode(4);
    root->right->right->right = newNode(10);
    int answer = sumAndMultiplyLevelData(root);
    cout<<"Final product value = "<<answer<<endl;

    return 0;
}
