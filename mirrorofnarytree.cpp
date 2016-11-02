#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<queue>
#include<stack>
#include<vector>
#include <bits/stdc++.h>
using namespace std ;
struct Node
{
    int data;
    vector <Node *> child ;
} ;
Node *newNode(int key)
{
    Node *temp = new Node;
    temp->data = key;
    return temp;
} ;
void printNodeLevelWise(struct Node *root)
{
    queue <Node *> q ;
    q.push(root) ;

    while(q.empty()== false )
    {
        int size = q.size() ;
        while(size>0)
        {
            Node *temp = q.front() ;
            cout<<temp->data <<" ";
            q.pop() ;
            for(int i=0 ; i<temp->child.size() ; i++)
            {
                q.push(temp->child[i]) ;
            }

            size-- ;
        }

    }
}
void mirrorTree(struct Node *root)
{
    if(root == NULL )
    return ;
    int n = root ->child.size() ;
    if(n<2)
    return ;

    for(int i =0 ; i<root->child.size() ; i++)
    mirrorTree(root->child[i]);

    reverse(root->child.begin(), root->child.end() ) ;
}
int main()
{
    /*   Let us create below tree
    *              10
    *        /   /    \   \
    *        2  34    56   100
    *                 |   /  | \
    *                 1   7  8  9
    */
    Node *root = newNode(10);
    (root->child).push_back(newNode(2));
    (root->child).push_back(newNode(34));
    (root->child).push_back(newNode(56));
    (root->child).push_back(newNode(100));
    (root->child[2]->child).push_back(newNode(1));
    (root->child[3]->child).push_back(newNode(7));
    (root->child[3]->child).push_back(newNode(8));
    (root->child[3]->child).push_back(newNode(9));

    cout << "Level order traversal Before Mirroring\n";
    printNodeLevelWise(root);

    mirrorTree(root);

    cout << "\nLevel order traversal After Mirroring\n";
    printNodeLevelWise(root);

    return 0;
}
