
#include<iostream>
#include<stdlib.h>
using namespace std ;
struct tree
{
    int data ;
    struct tree *left ;
    struct tree *right ;
} ;
struct tree **createqueue(int *front , int *rear )
{
    struct tree **q = (struct tree **)malloc(sizeof(struct tree*)*100) ;
    *front = *rear =0 ;
    return q ;

} ;
void enqueue(struct tree **queue, int *rear, struct tree *new_node)
{
    queue[*rear] = new_node;
    (*rear)++;
}
struct tree *dequeue(struct tree **queue, int *front)
{
    (*front)++;
    return queue[*front - 1];
}

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
void printlevelorder(struct tree *root )
{
    int rear , front ;
    struct tree ** q = createqueue(&front , &rear);
    struct tree *temp = root ;
    while(temp)
    {
        cout<<temp->data ;
        if(temp->left)
        enqueue(q,&rear ,root->left);
        if(temp->right)
        enqueue(q,&rear,root->right);

        temp = dequeue(q, &front);

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

