#include<stdio.h>
//#include<iostream>
#include<stdlib.h>
#include<conio.h>
//using namespace std;
struct node{
    int data;
    struct node *next;

};
typedef struct node st;


void push(struct node **head, int d)
{
    struct node *naya=(struct node*)malloc(sizeof(struct node));

    naya->data=d;
    naya->next=(*head);
    (*head)=naya;

}
void deletealter(struct node *head)
{   struct node *haha;
    struct node *temp=head;
    while((temp)!=NULL)
    {


        haha=temp->next;
//        printf("%d",temp->data);

        temp=temp->next->next;
        free(haha);


    }


}
void printlist(st *head1)
{
    struct node *temp=head1;

    while(temp->next!=NULL)
    {
        printf("%d",temp->data);
//        cout<<"sdfn"<<endl;
        temp=temp->next;
//        cout<<endl;
    }

}
int main()
{
    st *head = NULL;
    st *second=NULL;
    push(&head,8);
    push(&head,6);
    push(&head,4);
    push(&head,2);

    printf("\n");
  deletealter(head);
    printlist(head);


    return 0;

}
