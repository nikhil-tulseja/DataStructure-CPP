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
    st *skipm(st *start, int m,int n )
    {
        st *temp;
        temp=start;

        while(m>1)
        {
            cout<<"skipping :"<<temp->age<<endl;
            temp=temp->link;
            m--;
        }
        st *loc;
        loc=temp;

        while(n>0)
        {
            cout<<"deleting "<<temp->age<<endl;
            temp=temp->link;
            n--;
        }
        loc->link=temp->link;

        return start;
    }
int main()
{
    st *start, *ptr,*temp;
    ptr=create();
    start=ptr;
    while(ptr!=NULL)
    {
        cout<<ptr->age<<endl;
        ptr=ptr->link;
    }
    cout<<"M :"<<endl<<"N : "<<endl;
    int m,n;
    cin>>m>>n;
    start=skipm(start,m,n);
    while(start!=NULL)
    {
        cout<<start->age<<endl;
        start=start->link;


    }

}
