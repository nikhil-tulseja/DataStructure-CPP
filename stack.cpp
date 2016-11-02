#include<iostream>
#include<stdlib.h>

using namespace std;
typedef struct student
{
    int age;
    student *link;

};
typedef student st;

st* create()
{
    st *first,*crnt,*end;

    first=(st*)malloc(sizeof(st));
    cout<<"enter data for first node "<<endl;
    cin>>first->age;
    first->link=NULL;
    end=first;
        int n;
        cout<<"how many nodes ?? "<<endl;
        cin>>n ;
        for(int i=1;i<n;i++)
        {
            crnt=(st*)malloc(sizeof(st));
            cout<<"enter data"<<endl;
            cin>>crnt->age;
            end->link=crnt;

            crnt->link=NULL;
            end=crnt;



        }
        end->link=NULL;


        return first;
        }
    st* push(st* start)
    {
        st *top,*temp;
        int num;
        top =start;
        while(top->link!=NULL)
        {
            top=top->link;
        }

        cout<<"pushing : "<<endl;
         cout<<"enter element: "<<endl;
         cin>>num;
         temp=(st*)malloc(sizeof(st));
            temp->age=num;
            top->link=temp;
            temp->link=NULL;


            return start;
    }

    st* pop(st *start)
    {
        st *top,*locp;
        locp=start;
        top=start->link;
        while(top->link!=NULL)
        {
            locp=top;
            top=top->link;
        }
        locp->link=top->link;
            locp->link=NULL;
        return start;
    }


int main()
{
  st *start,*temp,*ptr;
    ptr=create();
    start=ptr;
    temp=ptr;
    while(ptr!=NULL)
    {
        cout<<ptr->age<<endl;
        ptr=ptr->link;
    }
    int ch;
    cout<<"choice ?? "<<endl;
    cin>>ch;

    while(ch==1 || ch==2)
    {
        cout<<ch;
        switch(ch)
        {
            case 1:
            {
             start=push(start);
             while(start!=NULL)
             {
                    cout<<start->age<<endl;
                    start=start->link;
             }
            start=temp;
                break;
            }
              case 2:
             {
                start=pop(start);
                 while(start!=NULL)
                 {
                    cout<<start->age<<endl;
                    start=start->link;
                }
                start=temp;
                break;

            }

    }

cout<<"now enter choice : "<<endl;
        cin>>ch;
}
}
