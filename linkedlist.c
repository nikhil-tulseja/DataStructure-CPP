#include<conio.h>
#include<stdio.h>


struct node
{
    int data ;
    struct node *next ;

}
/*void printlist(struct node* head)
{
    while(head!=NULL)
        {


        }
}*/
int main()
{
    int n,data;
    struct node *head = NULL ;
     printf("How many Nodes ? \n") ;
     scanf("%d", n );

     printf("DATA for first Node \n " ) ;
     scanf("%d", head->data);
     struct node *current =NULL;
     while(n)
     {
         current = (struct node*)malloc(sizeof(struct node));
         printf("Enter data for next node : ");

         scanf("%d",current->data) ;
         head-next=current;

         n-- ;
     }
     current->next=NULL;

     getchar();
     return 0 ;
}
