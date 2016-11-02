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
        end->link=first;


        return first;
        }

    int main()
    {
        st *ptr,*start,*temp;

        cout<<"tracking the last point !! "<<endl;
        ptr=create();
        start=ptr;
        while(ptr->link!=start)
        {
                ptr=ptr->link;
        }
        if(ptr->link==start)
        {
            cout<<"this is the last node !! "<<endl;
            cout<<ptr->age<<endl;

        }

    }
