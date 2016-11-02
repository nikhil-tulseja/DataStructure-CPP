#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
};

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right =  NULL;
    return temp;
}
bool findPath(Node *root , int v , vector<int> &path)
{
    if(root == NULL)
    return false ;

    path.push_back(root->data);
    if(root->data == v )
    {
        return true ;
    }
    if(root->left && findPath(root->left ,v , path)|| root->right && findPath(root->right, v , path ))
    return true ;

    path.pop_back();
    return false ;
}
int findLCA(Node *root , int n1 , int n2 )
{
    vector <int > path1 , path2 ;
    if(findPath(root,n1,path1) && findPath(root,n2,path2) )
    {
        cout<<"Traverse whole Vectors :"<<endl ;
        for (auto i = path1.begin() ,j=path2.begin(); i<=path1.end() , j<=path2.end(); i++,j++ )
        {
            cout<<path1[i]<<" " ;
            if(path1[i] != path2[j])
            {
                break ;
            }

        }

    }
    else
    {
        cout<<"one of the Mentioned data is not there in the tree. "<<endl;
    }

}
int main()
{

    Node * root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    cout << "LCA(4, 5) = " << findLCA(root, 4, 5);
    cout << "\nLCA(4, 6) = " << findLCA(root, 4, 6);
    cout << "\nLCA(3, 4) = " << findLCA(root, 3, 4);
    cout << "\nLCA(2, 4) = " << findLCA(root, 2, 4);
    return 0;
}
