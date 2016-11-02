#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std ;
/* Function to check if the stack is empty */
struct sNode
{
    int data;
    struct sNode *next;
};
bool isEmpty(struct sNode* top)
{
    return (top == NULL)? 1 : 0;
}

/* Function to push an item to stack*/
void push(struct sNode** top_ref, int new_data)
{
    /* allocate node */
    struct sNode* new_node =
        (struct sNode*) malloc(sizeof(struct sNode));

    if (new_node == NULL)
    {
        printf("Stack overflow \n");
        exit(0);
    }

    /* put in the data  */
    new_node->data  = new_data;

    /* link the old list off the new node */
    new_node->next = (*top_ref);

    /* move the head to point to the new node */
    (*top_ref)    = new_node;
}

/* Function to pop an item from stack*/
int pop(struct sNode** top_ref)
{
    char res;
    struct sNode *top;

    /*If stack is empty then error */
    if (*top_ref == NULL)
    {
        printf("Stack overflow \n");
        exit(0);
    }
    else
    {
        top = *top_ref;
        res = top->data;
        *top_ref = top->next;
        free(top);
        return res;
    }
}

/* Functrion to pront a linked list */
void print(struct sNode* top)
{
    printf("\n");
    while (top != NULL)
    {
        printf(" %d ", top->data);
        top =  top->next;
    }
}
void insertatbottom(struct sNode **top , int temp )
{
	if(isEmpty(*top))
	push(top,temp);
	else
	{
		int item = pop(top) ;
		insertatbottom(top,temp) ;
		push(top,item) ;
	}
}
void reversestack(struct sNode **ps )
{
	if(!isEmpty(*ps))
	{
        int item = pop(ps);
        reversestack(ps) ;


        insertatbottom(ps,item) ;
	}
}
int top(struct sNode *s)
{
    return (s->data);
}
void sortedInsert(struct sNode **s , int data )
{
    if(isEmpty(*s) || data < top(*s))
    {
        push(s,data) ;
    }
    else
    {
        int item = pop(s) ;
        sortedInsert(s,data);

        push(s,item);
    }

}

void sortstack(struct sNode **s )
{
    if(!isEmpty(*s))
    {
        int temp = pop(s);
        sortstack(s);

        sortedInsert(s, temp) ;
    }

}


int main()
{
    struct sNode *s = NULL;
    push(&s, 5);
    push(&s, 36);
    push(&s, 25);
    push(&s, 11);
    push(&s, 10 ) ;
    push (&s, -1 ) ;

    printf("\n Original Stack ");
    print(s);
   sortstack(&s);
    printf("\n sorted Stack ");
    print(s);
    return 0;
}
