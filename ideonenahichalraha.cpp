#include<iostream>
#define MAX 100
using namespace std;

// A Binary Tree node
struct Node
{
    char data;
    struct Node *left, *right;
};

// A utility function to create a new Binary Tree Node
struct Node *newNode(char item)
{
    struct Node *temp =  new Node;
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}
void reverse(char arr[], int n)
{
    int l = 0, r = n-1;
    while (l < r)
    {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++; r--;
    }
}

void printInorder(struct Node *root)
{
    if (root == NULL) return;
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}
void store(Node *root , char *arr , int *index , int level )
{
    if(root == NULL)
    return ;
    store(root->left,arr,index,level+1) ;
    if((level)%2 != 0 )
    {
        arr[*index] = root->data ;
        *(index)++ ;
    }
    store(root->right,arr,index, level+1 );
}
void modifytree(Node *root , char *arr , int *index , int level )
{
  if(root == NULL )
  {
      return ;
  }
  modifytree(root->left,arr,index,level+1) ;
  if((level)%2 != 0)
  {
      root->data = arr[*index];
      (*index)++ ;
  }
  modifytree(root->right,arr,index,level+1);

}
void reverseAlternate(Node *root)
{
    int index = 0 ;
    int level = 0 ;
    char *arr = new char[MAX] ;
    store(root,arr,&index,0) ;
    reverse(arr,index);
    index=0, level=0;
    modifytree(root,arr,&index,0) ;
    //reverseAlternate(root, arr , index , level ) ;

}


// Driver Program to test above functions
int main()
{
    struct Node *root = newNode('a');
    root->left = newNode('b');
    root->right = newNode('c');
    root->left->left = newNode('d');
    root->left->right = newNode('e');
    root->right->left = newNode('f');
    root->right->right = newNode('g');
    root->left->left->left = newNode('h');
    root->left->left->right = newNode('i');
    root->left->right->left = newNode('j');
    root->left->right->right = newNode('k');
    root->right->left->left = newNode('l');
    root->right->left->right = newNode('m');
    root->right->right->left = newNode('n');
    root->right->right->right = newNode('o');

    cout << "Inorder Traversal of given tree\n";
    printInorder(root);

    reverseAlternate(root);

    cout << "\n\nInorder Traversal of modified tree\n";
    printInorder(root);

    return 0;
}

