#ifndef ctci205
#define ctci205

struct Node
{
    int data;
    struct Node* next;
};
class MyClass
{
    public :
    Node *head ;
    int carry ;
    MyClass()
    {
     head = NULL ;
     carry = 0 ;
    }
  friend Node *newNode(int data);
// void printWidth( Box box );
    int getLength(Node *head);
    Node *sumLists( Node *head1, Node *head2) ;
    Node *insertBefore(Node *head,int data) ;
    Node *padList(Node *head , int no_of_nodes) ;
    MyClass sumListHelper(Node *head1 ,Node *head2) ;
    void printList(Node *head) ;
};

#endif
