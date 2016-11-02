#include<iostream>
#include<stdlib.h>

using namespace std;
typedef struct student
{
    int age;
    student *next;
    student *back;

};
typedef student st;

st* create()
{
    st *first,*crnt,*end;

    first=(st*)malloc(sizeof(st));
    cout<<"enter data for first node "<<endl;
    cin>>first->age;
    first->back=NULL;
    first->next=NULL;
    end=first;
        int n;
        cout<<"how many nodes ?? "<<endl;
        cin>>n ;
        for(int i=1;i<n;i++)
        {
            crnt=(st*)malloc(sizeof(st));
            cout<<"enter data"<<endl;
            cin>>crnt->age;
            crnt->back=end;
            end->next=crnt;

            crnt->next=NULL;
            end=crnt;



        }
        end->next=NULL;


        return first;
        }
        st* front(st*start)
        {

            cout<<"deletion from front "<<endl;
            start=start->next;
            start->back=NULL;
            return start;
        }
 st* rear(st *end)
 {
     st *t;
     cout<<"insertion at rear !! "<<endl;
     t=(st*)malloc(sizeof(st));
     cout<<"DATA?? "<<endl;
     int num;
     cin>>num;
     t->age=num;
     t->back=end;
     end->next=t;
     t->next=NULL;
//        end=t;


     return t;

 }
int main()
{
    st *start,*end,*ptr,*temp;
    ptr=create();

    start=ptr;
    temp=ptr;
    cout<<"left to right"<<endl;
    while(ptr!=NULL)
    {
        start=ptr;
        cout<<ptr->age<<endl;
        ptr=ptr->next;

    }

//    start=start->next;
        cout<<"right to left"<<endl;
    while(start!=NULL)
    {

        cout<<start->age;
        cout<<endl;
        start=start->back;

    }
    start=temp;
    start=front(start);
    while(start!=NULL)
    {
        end=start;
        cout<<start->age<<endl;
        start=start->next;
    }


    end=rear(end);
    while(end!=NULL)
    {
        cout<<end->age<<endl;
        end=end->back;
    }

return 0;
}
