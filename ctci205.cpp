#include<iostream>
#include "ctci205.h"

using namespace std ;

//double Box::getVolume(void)

int MyClass :: getLength(Node *head)
{
    int count = 0 ;
    while(head != NULL)
    {
        count++ ;
        head = head->next ;
    }
    return count ;

}
Node * MyClass :: insertBefore(Node *head , int data )
{
    Node *nayaNode = newNode(data) ;
    if(head != NULL)
    {
        nayaNode->next = head ;
    }
    return nayaNode;
}

Node * MyClass ::padList(Node *head,int num)
{
    Node *res = head ;
    for(int i = 0 ; i < num ; i++)
    {
        head = insertBefore(head,0);
    }
    return res ;
}
Node* newNode(int data)
{
    struct Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}
MyClass MyClass ::  sumListHelper(Node *head1, Node *head2)
{
    if(head1 == NULL && head2 == NULL )
    {
            MyClass list ;
            return list ;
    }
    MyClass obj = sumListHelper(head1->next , head2->next ) ;

    int val = obj.carry + head1->data +head2->data ;
    Node *full_result = insertBefore(obj.head , val%10);

    int carry = val /10 ;
    obj.head = full_result ;
    obj.carry = carry ;

    return obj ;

}
Node *MyClass :: sumLists( Node *head1, Node *head2)
{
    int l1 = getLength(head1) ;
    int l2 = getLength(head2) ;
    if(l1 < l2)
    {
        head1 = padList(head1, l2-l1) ;
    }
    else if(l2 < l1)
    {
        head2 = padList(head2,l1-l2) ;
    }

//    Node *newHead = NULL;
    MyClass finalList = sumListHelper(head1 , head2) ;

    if(finalList.carry != 0 )
    {
        Node * carryNode = insertBefore(finalList.head , carry) ;
        return carryNode ;
    }
    else
    {

        return finalList.head ;
    }
}
//Node *MyClass :: sumLists

void MyClass ::  printList(struct Node *head)
{
    while( head)
    {
        cout<<head->data<<" " ;
        head = head->next  ;
    }
}
int main()
{
    /* Start with the empty list */
//    MyClass * list = new MyClass() ;

    Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);

    struct Node* head2= newNode(5);
    head2->next = newNode(6);
    head2->next->next = newNode(7);

    Node * newHead = sumLists( head, head2)  ;
    printList(newHead) ;


return 0 ;
}

