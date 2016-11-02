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
void insertAfter(ste *prev , int data)
{
    ste *new_node = (ste*)malloc(sizeof(ste));
    new_node->data = data;

    new_node->next=prev->next;
    prev->next=new_node;
    cout<<"FGd"<<endl;

}
void append(ste **head, int data)
{
    ste *last = *head ;
    while(last->next!=NULL)
    last=last->next ;

    ste *new_node = (ste*)malloc(sizeof(ste));
    new_node->data=data;
    new_node->next=NULL;

    last->next = new_node;

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
void deleteNode(ste *node_ptr)
{
    ste * temp = node_ptr ->next;
    node_ptr->data= temp->data;
    node_ptr->next=temp->next;
    free(temp);
}
ste* middle(ste *head)
{
    //************ method 1 **************
//    cout<<count<<" "<<endl;
//    count=count/2;
//    while(count)
//    {
//        head=head->next;
//        count--;
//    }
//    cout<<head->data<<" "<<endl;
    //**************method 2***************
//        ste *first , *second ;
//        first=second=head;
//        while(first!=NULL && second!=NULL)
//        {
//            first=first->next;
//            second=second->next->next ;
//
//        }
//        cout<<first->data<<" kiddan soniyo ? "<<endl;
    //**************method 3 &*********
    ste * mid =head ;
    int counter =0 ;
    while(head!=NULL)
    {

        if((counter%2))
        {
            mid=mid->next ;

        }
    counter++;
    head=head->next;

    }
    cout<<mid->data<<" kidaan sonioyo ? "<<endl;
    return mid ;
}
int countlen(ste *head)
{
    if(head==NULL)
    return 0 ;
    else
    return 1+countlen(head->next);

}
bool search(ste *head, int element)
{
    cout<<"searching for element : "<<element<<endl;
    if(head==NULL)
    return false;
    else if(head->data==element)
    return true ;
    else
    return search(head->next, element);

}
//ste *insertin()
//{
//   st *first , *crnt, * end ;
//
//
//}

void nthnode(ste *head , int n )
{
    //ste *temp = head;
//    static int i =0 ;
//    if(head==NULL)
//    return ;
//    nthnode(head->next,n);
//    //cout<<head->data<<endl;
//    if(++i == n)
//    {
//    cout<<head->data<<" kiddan soniyo ? "<<endl;
//    }
 //************method 2  *****
      ste *first = head ;
      ste *second = head ;
      for(int i=1; i<=n ; i++)
      {
          first=first->next;

      }
      while(first!=NULL)
      {
          second=second->next;
          first=first->next;

      }
      cout<<second->data<<endl ;
}
/*void deletelist(ste *head)
{
//    ste *first = (*head);
    ste *second;

    while(first!=NULL)
    {
      cout<<" sdd g"<<endl ;
      second=first->next ;
        free(first);
        first=second;

//      cout<<"sf"<<endl;
    }
    *head=NULL;
  //***********method 2************
//       if(head==NULL)
//       return ;
//       else
//       deletelist(head->next);
//
//       free(head);
} */
void reverse (ste ** head)
{
    /*ste *prev, *crnt, *next ;
    prev=NULL ;
    crnt = (*head );
    while(crnt!=NULL)
    {
        next=crnt->next;
        crnt->next = prev ;
        prev=crnt;
        crnt=next;


    }
    *head = prev ;*/
    /** method 2 **/
    ste *first , *second ;
    cout<<" aapa bdoya !!"<<endl;
    if(*head == NULL)
    {
        cout<<" head null called!! "<<endl;
        return ;
    }
    first = (*head);
    cout<<first->data<<" First : "<<endl;
    second = first->next ;
            if(second)
            cout<<second->data<<" second : "<<endl;
    if(second == NULL)
    {
        cout<<" second null called!! "<<endl;
        return ;
    }


    reverse(&second);
    cout<<(*head)->data<<" head ka data "<<endl;
    cout<<"check mike check!! "<<endl;
    cout<<first->data<<" First : "<<endl;
    cout<<second->data<<" second : "<<endl;
    first->next->next=first;
    //cout<<(*head)->data<<" head ka data baad mai "<<endl;

    first->next=NULL ;
    //if(first->data == 5)
    *head = second;
}
//bool ispalindrome(ste **head)
//{
//    ste *midnode = middle(head);
//    reverse(&midnode);
//    while(midnode!=NULL)
//    {
//        if((*head->data)==midnode->data)
//        {
//            cout<<"equal"<<endl;
//        }
//        else
//        {
//            return false ;
//        }
//        midnode=midnode->next;
//        head=head->next;
//    }
// return true ;
//}
bool isPalindromeUtil(struct node **left, struct  node *right)
{
   /* stop recursion when right becomes NULL */
   if (right == NULL)
      return true;

   cout<<right->data<<" right !! "<<endl;
   /* If sub-list is not palindrome then no need to
       check for current left and right, return false */
   bool isp = isPalindromeUtil(left, right->next);
   cout<<(bool)isp<<" isp:  "<<endl;
   if (isp == false)
      return false;

    cout<<right->data << "<- right ka data "<<endl;
    cout<<(*left)->data << "<- left ka data "<<endl;
   /* Check values at current left and right */
   bool isp1 = (right->data == (*left)->data);

   /* Move left to next node */
   *left = (*left)->next;
    cout<<" returning isp1 "<<(bool)isp1<<endl;
   return isp1;
}
int getcount(ste *head)
{
    int counter=0;
    while(head!=NULL)
    {
        counter++ ;
        head=head->next;
    }
    return counter ;
}
void pairswap(int *a , int *b)
{
    int temp = *a ;
    *a = *b ;
    *b = temp ;


}

void swap(ste **head)
{
  /****method 1 * **/
  /*ste *temp1,*temp2 ;
     temp1= (*head);


      while(temp1 !=NULL && temp1->next!=NULL)
      {

       int t =temp1->data ;
temp1->data = temp1->next->data ;
          temp1->next->data = t ;
        temp1=temp1->next->next ;
//        temp2=temp1->next ;
        //cout<<temp1->data<<" data : "<<endl;
//        cout<<temp2->data<<" 2 "<<endl;
       //(*head) = (*head)->next;
      }
*/
/** method 2 **/
     /* if((head)!=NULL && head->next!=NULL)
     {

      int t = head->data;
      head->data = head->next->data;
      head->next->data= t ;
      swap((head)->next->next);
     }
     */
     /** method 3 **/
     if((*head)==NULL || (*head)->next==NULL)
     return ;
     ste *prev= (*head),*crnt = (*head)->next ;
     ste *next = crnt->next ;
      (*head) = crnt ;
     while(true)
     {

      if(next==NULL || next->next==NULL)
      {
          prev->next=next;
          break ;
      }
      crnt->next = prev ;
      prev->next = next->next ;
      prev = next;
        crnt = prev->next;
     }





}
ste *sortedin(ste **head1, ste **head2)
{
     ste* temp1,*temp2 ;
     temp1= (*head1) ;
     temp2= (*head2);
     int c1=0 ,c2=0;
     while(temp1!=NULL)
     {
         temp1=temp1->next ;
         c1++;
     }
     while(temp2!=NULL)
     {
         temp2=temp2->next ;
         c2++;
     }
     int diff=0 ;
     if(c1>c2)
     {
         diff = c1-c2 ;
         temp1=(*head1);
         for(int i=0;i<diff;i++)
         {
             temp1=temp1->next ;
         }
         temp2=(*head2);
     }
     else if(c2>c1)
     {
         diff= c2-c1 ;
         temp2=(*head2);
         for(int i=0;i<diff;i++)
         {
             temp2=temp2->next ;
         }
         temp1=(*head1);
     }
     ste *new_node,*crnt ;


     while(temp1 && temp2)
     {
         if(temp1==temp2)
         {
             push(&new_node,temp1->data);
         }
         temp1=temp1->next ;
         temp2=temp2->next ;
     }
}
void deletealter( ste *head)
{
    if(head==NULL)
    return ;


    ste *temp =head->next ;
     if(temp==NULL)
     return ;
    head->next =temp->next ;
        free(temp) ;
//        if(head->next->next!=NULL)
            deletealter(head->next);

}
//void altern(ste *head)
//{
//    ste * new_node , *new2;
//    push(new_node , head->data) ;
//    push(new2,head->next->data);
//        head= head->next->next ;
//
//}
/*void swaplinks(ste **head)
{
    if((*head)==NULL || (*head)->next==NULL)
    return;
    ste *curr = (*head);
    ste *next = (*head)->next ;
    next->next=curr ;
    (*head)=next;
    while(true)
    {
          if(next == NULL || next->next == NULL )
          {

          }

    }
*/
ste * reversegroup(ste *head, int k )
{
    ste *headre = head  ;
    ste *crnt, *next, *prev;
    prev =NULL ;
    crnt =head ;
//    next =(*head)->next ;
    int count1 =0 ;
    while(crnt != NULL && count1<k)
    {
        next = crnt->next ;
        crnt->next=prev ;
        //next->next=crnt ;
        prev = crnt ;
        crnt=next  ;
        count1++;
    }
    //cout<<"sdf : "<<head->data <<endl;
    if(next!=NULL)
    head ->next = reversegroup((next), k );
    return prev ;
}
void frontbacksplit(ste *head, ste **a, ste **b)
{
    *a = head ;

//    int len=0;
//    while(head!=NULL)
//    {
//        len++;
//        head=head->next;
//    }
    ste *slow,*fast;
    slow=head;
    fast=head->next;
    while(fast!=NULL )
    {
      fast=fast->next;
        if(fast!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
    }
    *b = slow->next ;
    slow->next=NULL;
//   while( *a !=NULL)
//   {
//       cout<<(*a)->data <<endl ;
//       (*a)=  (*a)->next ;
//   }
//    cout<<" khatam "<<endl;
//    while( *b !=NULL)
//    {
//       cout<<(*b)->data <<endl ;
//       (*b)=  (*b)->next ;
//   }

}
ste *sortedmerge(ste *a , ste *b )
{
    ste *res=NULL ;
    if(a==NULL)
    return b;
    else if(b==NULL)
    return a ;
    if(a->data <= b->data)
    {
        res=a;
        res->next = sortedmerge(a->next,b);
    }
    else
    {
        res=b;
        res->next = sortedmerge(a,b->next);
    }
    return res ;
}
void mergeSort(ste **head)
{
    ste *a = NULL ;
    ste *b = NULL ;
    if((*head)==NULL && (*head)->next==NULL)
    {
        return ;
    }
    else
    frontbacksplit((*head),&a,&b);

    mergeSort(&a);
    mergeSort(&b);

    *head = sortedmerge(a,b);

}
ste *reversealter(ste *head , int k )
{
 ste *crnt, *next, *prev;
    prev =NULL ;
    crnt =head ;
//    next =(*head)->next ;
    int count1 =0 ;
    while(crnt != NULL && count1<k)
    {
        next = crnt->next ;
        crnt->next=prev ;
        //next->next=crnt ;
        //next->next=crnt ;
        prev = crnt ;
        crnt = next ;
        count1++ ;
    }
    if(next!=NULL)
    {
        cout<<" "<<next->data<<" Not Null upar : "<<endl ;
        head->next=next ;
//        head=next ;
    }
    int count2=1;
    while(count2<k && next!=NULL)
    {

            cout<<" "<<next->data<<" Not Null : "<<endl ;
            next=next->next ;
//          cout<<" "<<next->data<<" Not Null : "<<endl ;}


        count2++ ;
    }
    //cout<<"sdf : "<<head->data <<endl;
    if(next!=NULL)
    {
    next->next = reversealter((next->next), k );
    }
    return prev ;

}
void rightgreat( ste **head )
{
    ste * crnt=(*head);

    while(crnt!=NULL)
    {

        if(crnt->data > crnt->next->data)
        {
            ste * temp = crnt ;
            crnt->next=temp->next ;
            free(temp);
        }
        crnt = crnt->next;
    }

}
void segregate(ste **head)
{
    ste *headre = (*head) ;
    ste * crnt = headre ;
    while(crnt->next!=NULL)
    {
        crnt = crnt->next ;
    }
    ste *first ;
    headre=first;
    while(first!=NULL)
    {
        if((first->data)%2==0)
        {
            first=first->next;
        }
        else
        {
            ste *temp = first ;
            crnt->next = temp ;
            crnt=temp ;
            first=first->next->next;
        }
    }
}

int main()
{
    ste *head = NULL;
   push(&head, 1);
   push(&head, 2);
   push(&head, 9);
   push(&head, 3);
   push(&head, 2);
   push(&head, 4);
   push(&head, 5);
   push(&head, 87);
   push(&head, 92);
   push(&head, 100);
   push(&head, 102);
   push(&head, 101);
//   insertAfter(head->next->next,55 );

   //deleteNode(head->next);
//   cout<<"head node deleted !! "<<endl ;
//   deletelist(head);
   printlist(head);
//   reverse(&head);
//   cout<<"reversed @@ haha "<<endl ;

   //int a = countlen(head);
   //nthnode(head,3);
   //cout<<a<<" this is length : !! "<<endl;
//   bool haha = search(head, 89);
//   cout<<"hahaha :"<<haha<<endl ;
//   middle(head);
//    if(isPalindromeUtil((&head),head))
//    {
//          cout<<" is palindrome!! "<<endl ;
//    }
//   swap(&head);
   //deletealter(head);
   cout<<head->data << " " ;
//   head = reversealter(head, 3 );
   //rightgreat(&head) ;
    segregate(&head);
   printlist(head);
   return 0 ;

}
