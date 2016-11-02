#include<iostream>
#include<stdlib.h>

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
    new_node->next= *head ;
    (*head)= new_node ;
//     cout<<new_node->data <<endl;

}
void deleten(ste **head,int key)
{
    ste *temp = *head;
    ste *prev ;
    if(temp->data==key)
    {
        (*head)=(*head)->next ;
        free(temp);
        return ;
    }
    while(temp!=NULL && temp->data!=key)
    {
        prev=temp;
        temp=temp->next;

    }
    if(temp==NULL)
    {
        cout<<"Node Not Found!!"<<endl;


    }
    else
    {
        prev->next=temp->next;
        free(temp);
        return ;

    }


}
void printlist(struct node *head)
{
    while(head!=NULL)
        {
        cout<<head->data<<endl;
        head=head->next ;

        }
}
//ste *insertin()
//{
//   st *first , *crnt, * end ;
//
//
//}
int main()
{
    ste *head = NULL;
   push(&head, 8);
   push(&head, 6);
   push(&head, 9);
   push(&head, 0);
   push(&head, 2);
   push(&head, 5);
   deleten(&head,5);
   deleten(&head,0);
   deleten(&head,8);
   deleten(&head,98);
//   insertAfter(head->next->next,55 );
//   append(&head, 76);
   printlist(head);

   return 0 ;

}
