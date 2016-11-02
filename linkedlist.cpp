#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std ;

struct node
{
    int data ;
    struct node *next ;
};
void printlist(struct node* head)
{
    while(head!=NULL)
        {
        cout<<head->data<<endl;
        head=head->next ;

        }
}
int main()
{
    int n;
    struct node *head = NULL ;
    struct node *end = NULL ;
     cout<<"How many Nodes ? "<<endl;
     cin>>n ;
     head = (struct node*)malloc(sizeof(struct node));
     cout<<"DATA for first Node ? "<<endl ;
     cin>>head->data;
//    cout<<"kiddan entering loop"<<endl;

     struct node *current=NULL;
//     cout<<"entering loop"<<endl;

     head->next=NULL;
     end=head;
//     cout<<"entering loop"<<endl;
     for(int i=1 ; i<n ; i++)
     {
         current = (struct node*)malloc(sizeof(struct node));
         cout<<"Enter data for next node : "<<endl;

         cin>>current->data ;
         end->next=current  ;
         current->next=NULL ;
         end=current ;
     }
     end->next=NULL;

 printlist(head);
     getchar();
     return 0 ;
}

