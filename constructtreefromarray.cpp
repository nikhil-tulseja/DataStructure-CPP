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
void constuctTree(struct node *root, int a[], int n )
{
    //so first i am going to push this root into queue .

    queue<node*> q ;
    q.push(root) ;
    // now i am going to check if queue size is zero or not

    while(q.empty() == false)
    {
        node *node = q.front() ;
        q.pop() ;

        for(int i = 0 ; i< n ; i++ )
        {
            if(a[i] == node->data )
            {
                struct node * temp = newNode(i);
                if(node->left)
                {
                    node->right = temp ;
                    q.push(node->right) ;
                    break ;
                }
                else
                {
                    node->left = temp ;
                    q.push(node->left) ;
                }


            }

        }
    }

}
void inorder(node*root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data<< " ";
        inorder(root->right);
    }
}
void createNode(int parent[],node* created[], int i ,struct node **root)
{
    if(created[i] != NULL)
    return ;
    created[i] = newNode(i) ;
    if(parent[i] == -1 )
    {
        *root = newNode(i) ;
        return ;
    }
    if(created[parent[i]] == NULL )
    {
        createNode(parent,created,parent[i],root) ;
    }
    node *p = created[parent[i]]  ;
    if(p->left == NULL )
    {
        p->left = created[i] ;

    }
    else
    p->right = created[i] ;
}
struct node *createTree( int parent[] , int n)
{
    node *created[n] ;
    for(int i = 0 ; i<n ; i++)
    created[i] = NULL ;
    node *root ;
    for(int i = 0 ; i< n ; i++ )
    createNode(parent,created, i ,&root) ;

    return root ;
}
int main()
{
    int parent[] =  {-1, 0, 0, 1, 1, 3, 5};
    int n = sizeof parent / sizeof parent[0];

    int i ;
    for(i=0;i<n;i++)
    {
        if(parent[i] == -1 )
        {
            break ;
        }
    }
//    struct node *root = newNode(i);
    struct node *root = createTree( parent,n) ;
    cout << "Inorder Traversal of constructed tree\n";
    inorder(root);



return 0 ;
}

