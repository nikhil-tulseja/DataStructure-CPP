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
st *merge(st *p, st *q)
{
    st * temp,*tempq, *start;
    start=p;
    while(p!=NULL && q!=NULL)
    {
        temp=p->link;
        tempq=q->link;
//        cout<<"this is temp : "<<endl<<temp->age<<endl;


        q->link=temp;
        p->link=q;

        p=temp;

        q=tempq;
    }
    cout<<"now remianing second list is : "<<endl;
    while(q!=NULL)
    {

        cout<<q->age<<endl;

        q=q->link;
    }
    return start;

}

int main(){

    st *start,*ptr,*t;
    ptr=create();

    start=ptr;
//    t=ptr;
    cout<<"LIST: "<<endl;
    while(ptr!=NULL)
    {
        cout<<ptr->age<<endl;
        ptr=ptr->link;

    }
    st *q;
    cout<<"enter second link list :"<<endl;
    q=create();
    t=q;
    while(t!=NULL)
    {
        cout<<t->age<<endl;
        t=t->link;


    }
    start=merge(start,q);
    cout<<"end the final link list is :  "<<endl;
    while(start!=NULL)
    {
        cout<<start->age<<endl;
        start=start->link;

    }

return 0 ;
}
