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

    st *deleteatbegin(st *start)
    {

        start=start->link;
        return start;

    }
    st *deleteafternode(int node,st *start )
    {
        st *t,*temp;
//        t=(st*)malloc(sizeof(st));
//        t->age=num;
//        int i=0;
//        temp=(st*)malloc(sizeof(st));
        temp=start;
        t=start->link;
        while(temp->age!=node)
        {
//            cout<<((start+i)->age);
            cout<<t->age<<endl;
            temp=temp->link;
            t=t->link;
//            cout<<"loop"<<endl;

        }
        temp->link=t->link;
//        temp->link=t;

            return start;


    }

    st *deleteanode(int pos , st * start)
    {
        st *t, *temp;
        t=(st*)malloc(sizeof(st));
        temp=start;
        t=start->link;
        if(temp->age==pos)
        {
            temp=temp->link;
            return temp;
        }
        while(t->age!=pos)
        {
//            cout<<((start+i)->age);
            cout<<t->age<<endl;
            temp=temp->link;
            t=t->link;
//            cout<<"loop"<<endl;

        }
        temp->link=t->link;
//        temp->link=t;

            return start;


    }

int main(){

    st *start,*ptr,*temp;
    int pos,item;
    ptr=create();
    start=ptr;
    temp=ptr;
    while(ptr!=NULL)
    {
//        cout<<"PTR: "<<ptr<<endl;
        cout<<ptr->age;
        ptr=ptr->link;
        cout<<endl;
    }
//        cout<<"insert item in linked list at beginning: "<<endl;
//        cout<<"enter item "<<endl;
////        cin>>item;
//    cout<<"deletion at beginning"<<endl;
//        start=deleteatbegin(start);
//        while(start!=NULL)
//        {
//            cout<<start->age<<endl;
//            start=start->link;
//        }
//        start=temp;
//
//        cout<<"enter node aftr which u wnat to insert data: "<<endl;
//        cin>>item;
//        start=deleteafternode(item,start);
//        cout<<"printing final list "<<endl;
//        while(start!=NULL)
//        {
//            cout<<start->age<<endl;
//            start=start->link;
//        }
//        start=temp;
        cout<<"enter node  "<<endl;
        cin>>pos;
        start=deleteanode(pos,start);
        cout<<"printing final list : "<<endl;
        while(start!=NULL)
        {
            cout<<start->age<<endl;
            start=start->link;
        }
        start=temp;
    return 0;
}


