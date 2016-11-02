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
    st *swapk(st *start, int k ,int m)
    {
        st *temp,*ptr,*nexts,*nexte;
        temp=start;
        ptr=start;
        nexts=temp;
        while(k>2)
        {
                        cout<<"is at : "<<temp->age<<endl;
                                    temp=temp->link;
                                    nexts=temp->link;
                k--;
        }
        int t=temp->age;
        while(m>0)
        {
        cout<<"is at :"<<ptr->age<<endl;
         ptr=ptr->link;
         nexte=ptr->link;
         m--;
        }
        temp->link=nexte;
        ptr->link=nexts;


        return start;
    }


int main()
{
    st *start,*ptr,*temp;
    int m,co=0;

    ptr=create();
    start=ptr;
    temp=start;
    while(ptr!=NULL)
    {
        ptr=ptr->link;
        co++;

    }
     cout<<"number of nodes : "<<co<<endl;
     cout<<"M :"<<endl;
     cin>>m;

     start=swapk(start,m,co-m);
    while(start!=NULL)
    {

        cout<<start->age<<endl;
        start=start->link;

    }

}
