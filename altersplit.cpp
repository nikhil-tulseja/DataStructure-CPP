#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;

};
void push(struct node **head,int data)
{
    struct node *naya=(struct node *)malloc(sizeof(struct node));
//    cout<<"gjd"<<endl;
    naya->data=data;
//    cout<<"gjd"<<endl;
    naya->next=(*head);
    cout<<"gjdpush"<<endl;
    (*head)=naya;
//     (*head)->next=NULL;
}
void printlist(struct node *head)
{

    struct node *temp=head;

    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
}

void altersplit(struct node **head)
{
    struct node *aref=NULL,*bref=NULL ;
    struct node **a=&aref;
    struct node **b=&bref;
    struct node *temp=NULL;
    int count=0;
    while(*head!=NULL)
    {
    count++;
    if(count%2==0)
    {
        push(b,(*head)->data);
//                    b=&((*b)->next);

//        temp=(*head);
//        free(temp);

    }
    else{
    push(a,(*head)->data);
//        a=&((*a)->next);
//    temp=(*head);
//        free(temp);
    }
    (*head)=(*head)->next;
    }
            printlist(*a);
            cout<<"second"<<endl;
        printlist(*b);

}
int main()
{
 struct node *head=NULL;
 struct node *temp=NULL;
// cout<<"gjd"<<endl;
 push(&head,3);
// cout<<"gjdxs"<<endl;

 push(&head,4);
 push(&head,5);
 push(&head,6);
 push(&head,7);
 push(&head,8);
 push(&head,9);
 push(&head,10);
 push(&head,11);
temp=head;
 cout<<endl;
 cout<<"Le marr"<<endl;
 printlist(head);
 cout<<"after splitting into two lists: "<<endl;
 altersplit(&head);
 cout<<"Fsf"<<endl;
 printlist(temp);

    return 0;
}
