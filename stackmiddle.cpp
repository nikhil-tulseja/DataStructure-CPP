#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std ;
struct stack
{
    int data ;
    struct stack *prev ;
    struct stack *next ;
};
struct myStack
{
    int count ;
    struct stack *head ;
    struct stack *mid ;
};
struct myStack *create()
{
    struct myStack *ms = (struct myStack*)malloc(sizeof(struct myStack));
    ms->count = 0 ;
    return ms ;
}

void push(struct myStack *ps ,int data)
{
    struct stack *newNode = (struct stack*)malloc(sizeof(struct stack));
    newNode ->data = data ;

    newNode->prev = NULL ;
    newNode->next = ps->head ;

    ps->count +=1 ;

    if(ps->count==1)
    ps->mid = newNode ;
    else
    {
        ps->head->prev = newNode ;

        if(ps->count&1)
        {
            ps->mid = ps->mid->prev ;
        }
        ps->head = newNode ;
    }
}
int pop(struct myStack *ms )
{
    int x ;
    if(ms->count==0)
     {
     cout<<"Not possible "<<endl ;
        return 0 ;
     }
     else
     {


        struct stack *temp = ms->head ;
        ms->head = temp->next ;
        if(ms->head!=NULL)
        ms->head->prev =NULL ;
        x = temp->data ;
        ms->count=ms->count-1 ;


        if(!(ms->count & 1))
        ms->mid = ms->mid->next;
        free(temp ) ;

     }
     return x ;
}
int findMiddle(struct myStack *ms )
{
    if(ms->count ==0 )
     return 0 ;

    return ms->mid->data ;

}
int main()
{
    /* Let us create a stack using push() operation*/
    struct myStack *ms = create();
    push(ms, 11);
    push(ms, 22);
    push(ms, 33);
    push(ms, 44);
    push(ms, 55);
    push(ms, 66);
    push(ms, 77);

    printf("Item popped is %d\n", pop(ms));
    printf("Item popped is %d\n", pop(ms));
    printf("Middle Element is %d\n", findMiddle(ms));
    return 0;
}
