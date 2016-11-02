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
int findMax(struct node *root)
{
    if(root == NULL )
    return 0  ;
    int res = root->data ;
    int lres = findMax(root->left) ;
    int rres = findMax(root->right) ;
    if(lres > res )
    res = lres ;
    if(rres > res )
    res = rres ;

    return res ;


}
bool iterativelevel(struct node *root, int x)
{
    if(root == NULL )
    return false;

    queue<node*> q ;
    q.push(root) ;
    int size = q.size() ;
    while(q.empty() == false )
    {
        node *node = q.front() ;
        q.pop() ;
        if( node->data  == x)
            return true ;
     if(node->left)
     q.push(node->left) ;
     if(node->right)
     q.push(node->right) ;


    }
    return false ;

}
bool iterativepre(struct node *root ,int x)
{
    if(root == NULL )
    return false ;
    stack<node *> s ;
    s.push(root) ;
    while(s.empty() == false )
    {
        node *node = s.top() ;
        cout<<node->data <<" ";
        s.pop() ;
        if(node ->data == x)
        return true ;

        if(node->right)
        s.push(node->right) ;
        if(node->left)
        s.push(node->left ) ;
    }
    return false ;

}
bool iterativein(struct node *root, int x )
{
    if(root == NULL )
    return false ;
    stack<node *> s ;
//    s.push(root) ;
    bool done = false ;
    while(!done)
    {
//        node *node = s.top() ;
        if(root)
        {
        s.push(root);
        root = root->left ;
        }
        else
        {
            if(s.empty() == false)
            {
                root = s.top() ;
                cout<<root->data <<" " ;
                s.pop() ;
                root = root->right ;


            }
            else
            done = true ;
        }

}
}
void iterativepost(struct node *root)
{
    stack<node *> f ,s ;
     f.push(root) ;

     while(f.empty() == false )
     {
         node *node = f.top() ;

         s.push(node) ;
         f.pop() ;

         if(node->left)
         f.push(node->left) ;
         if(node->right)
         f.push(node->right) ;
     }
     while(s.empty() == false )
     {
         node *node = s.top();
         cout<<node->data <<" " ;
         s.pop() ;
     }

}
void iterativepost_2(struct node *root)
{
    stack<node*> f ;
    f.push(root) ;
        //    while(!done )
        //    {
        //        if(root->left)
        //        {
        //            root = root->left ;
        //
        //        node *node = f.top() ;
        //        if(node->right)
        //        {
        //            f.push(node->right) ;
        //
        //        }
        //        f.push(node);
        //        }
        //        else
        //        {
        //            if(root->right)
        //            root = root->right ;
        //
        //        }
            while(root)
            {
                if(root->right)
                f.push(root->right);
                f.push(root) ;
                if(root->left)
                root->left ;

            }
               root = f.top() ;
               f.pop() ;
               if(root->right && )

    }

}
int main()
{
   // struct node*NewRoot=NULL;
    struct node *root = newNode(2);
    root->left        = newNode(7);
    root->right       = newNode(5);
    root->left->right = newNode(6);
    root->left->right->left=newNode(1);
    root->left->right->right=newNode(11);
    root->right->right=newNode(9);
    root->right->right->left=newNode(4);

////    cout<<"Maximum element is \n"<< findMax(root)<<endl;
//    if(iterativein(root , 12 ))
//    cout<< "search for Element is successful"<<endl ;
        iterativepost(root) ;
    return 0;
}


