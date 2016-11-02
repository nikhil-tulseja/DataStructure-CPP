#include<iostream>
#include<stdlib.h>
int count=0 ;
using namespace std ;
struct node
{
    int data;
    struct node *next;

};
typedef struct node ste ;
void push(ste **head, int data)
{
    if((*head)==NULL)
    {
        (*head)=(ste*)malloc(sizeof(ste));
        (*head)->data= data ;
        (*head)->next=NULL;
//        cout<<(*head)->data<<endl ;
        return ;
    }
//    cout<<"here"<<endl;
    ste *new_node = (ste*)malloc(sizeof(ste));
    new_node->data=data;
    new_node->next= *head;
    (*head)= new_node;
//     cout<<new_node->data <<endl;

}
void printlist(struct node *head)
{

    while(head!=NULL)
        {
        cout<<head->data<<endl;
        count++;
        head=head->next ;

        }

}

