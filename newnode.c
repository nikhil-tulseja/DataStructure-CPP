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
struct node *intersectsort(st *head1, st *head2)
{
    struct node *listnew=NULL;
    struct node* result = NULL;
  struct node** lastPtrRef = &result;
    while(head1!=NULL && head2!=NULL)
    {
        if((head1->data)==(head2->data))
        {
            printf("similar");
            printf("\n");
            push(lastPtrRef, head1->data);
            lastPtrRef = &((*lastPtrRef)->next);
            head1=head1->next;
            head2=head2->next;
        }
        else if ((head1->data)< (head2->data))
                {   printf("not similar1");
                    printf("\n");
                    head1=head1->next;
                }
        else
            {   printf("not similar2");
                printf("\n");
                head2=head2->next;
            }

    }
    return result;
}
void printlist(st *head)
{
    st *temp=head;
    while(temp!=NULL)
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

    printlist(head);

    push(&second,8);
    push(&second,7);
    push(&second,6);
    push(&second,5);
    push(&second,4);
    push(&second,3);
    push(&second,2);
    push(&second,1);
    printf("\n");
    printlist(second);
    printf("\n");
    st *intersect=NULL;
    intersect =intersectsort(head,second);
//    getchar();

        printf("the new list after intersection : ");
        printf("\n");
        printlist(intersect);
return 0;
}

