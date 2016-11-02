#include <iostream>
#include <cstring>
using namespace std;
#define MAX 100

// Structure of a tree node
struct Node
{
    char key;
    struct Node *left, *right;
};

// A utility function to create a new BST node
Node *newNode(char item)
{
    Node *temp =  new Node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
void storein(Node *root , char arr[], int &i)
{
    if(root == NULL )
    {
        arr[i++] = '$' ;
        return ;
    }
    storein(root->left,arr, i) ;
    arr[i++] = root->key ;
    storein(root->right,arr, i);
}
void storepre(Node *root, char arr[], int &i )
{
    if(root == NULL)
    {
        arr[i++] = '$' ;
        return ;
    }
    arr[i++] = root->key ;
    storepre(root->left , arr, i) ;
    storepre(root->right, arr, i) ;

}
// Driver program to test above function
bool isSubtree(Node *t, Node *s )
{
    if(t == NULL)
    return false;
    if(s == NULL)
    return true ;

    int m=0,n=0;
    char insr[MAX];
    char intr[MAX];
    storein(t,intr,m) ;
    storein(s,insr,n) ;
    intr[m] = '\0' ;
    insr[n] = '\0' ;

    for(int i =0 ; i <m ; i++)
    cout<<insr[i]<<" " ;
    for(int i =0 ; i < m ; i++)
    cout<<intr[i]<<" " ;
    if(strstr(intr,insr) == NULL )
    {
        return false ;
    }
    char pres[MAX] ;
    char pret[MAX] ;
    m =0 , n =0 ;
    storepre(t, pret, m) ;
    storepre(s ,pres, n) ;

    pret[m] = '\0' ;
    pres[n] = '\0' ;
    for(int i =0 ; i < m ; i++)
    cout<<pret[i]<<" " ;

    for(int i =0 ; i < n ; i++)
    cout<<pres[i]<<" " ;
    return (strstr(pret,pres) != NULL ) ;
}
int main()
{
    Node *T = newNode('a');
    T->left = newNode('b');
    T->right = newNode('d');
    T->left->left = newNode('c');
    T->right->right = newNode('e');

    Node *S = newNode('a');
    S->left = newNode('b');
    S->left->left = newNode('c');
    S->right = newNode('d');

    if (isSubtree(T, S))
        cout << "Yes: S is a subtree of T";
    else
        cout << "No: S is NOT a subtree of T";

    return 0;
}
