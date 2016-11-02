#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;
struct node{
    int data;
    struct node *next;

};
typedef struct node st;


void push(struct node **head, int data)
{
    struct node *naya=(struct node*)malloc(sizeof(struct node));

    naya->data=data;
    naya->next=(*head);
    (*head)=naya;

}
//st intersectsort(st *head, st *head2)
//{
//
//}
void printlist(st *head)
{
    st *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        cout<<"sdfn"<<endl;
        temp=temp->next;
        cout<<endl;
    }

}
int main()
{
    st *head ;
    push(&head,2);
    push(&head,4);
    push(&head,6);
    push(&head,8);

    printlist(head);

    getchar();
return 0;
}
