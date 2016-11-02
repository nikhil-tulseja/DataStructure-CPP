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

//    st *insertatbegin(int num, st *start)
//    {
//        st *temp;
//        temp=(st*)malloc(sizeof(st));
//        temp->age=num;
//            temp->link=start;
//            start=temp;
//
//
//        return start;
//
//    }
//    st *insertafternode(int num, int node,st *start )
//    {
//        st *t,*temp;
//        t=(st*)malloc(sizeof(st));
//        t->age=num;
//        int i=0;
//        temp=(st*)malloc(sizeof(st));
//        temp=start;
//        while(temp->age!=node)
//        {
////            cout<<((start+i)->age);
////            cout<<endl;
//            temp=temp->link;
////            cout<<"loop"<<endl;
//
//        }
//        t->link=temp->link;
//        temp->link=t;
//
//            return start;
//
//
//    }
//
//    st *insertatnode(int num, int pos , st * start)
//    {
//        st *t, *temp;
//        t=(st*)malloc(sizeof(st));
//        t->age=num;
//        temp=(st*)malloc(sizeof(st));
//        temp=start;
//        if(pos==1)
//        {
//
//            t->link=start;
//            start=t;
//            return start;
//        }
//        while(pos-2>0)
//        {
//
//            temp=temp->link;
//            pos--;
//
//        }
//        t->link=temp->link;
//        temp->link=t;
//
//        return start;
//    }
    st * insertsorted(st * start)
    {
        st *t,*temp,*save;
        t=(st*)malloc(sizeof(st));
        cout<<"enter num "<<endl;
        int n;
        cin>>n;
        t->age=n;
        temp=start;
        while(temp!=NULL)
        {
            if(n<(temp->age))
            {
                t->link=save->link;
                save->link=t;
                return start;
            }
            save=temp;
            temp=temp->link;
        }
        t->link=save->link;
        save->link=t;

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
//        cin>>item;
//        start=insertatbegin(item,start);
//        while(start!=NULL)
//        {
//            cout<<start->age<<endl;
//            start=start->link;
//        }
//        start=temp;
//
//        cout<<"enter node aftr which u wnat to insert data: "<<endl;
//        cin>>item;
//        start=insertafternode(45,item,start);
//        while(start!=NULL)
//        {
//            cout<<start->age<<endl;
//            start=start->link;
//        }
//        start=temp;
//        cout<<"enter node no. "<<endl;
//        cin>>pos;
//        start=insertatnode(45,pos,start);
//        while(start!=NULL)
//        {
//            cout<<start->age<<endl;
//            start=start->link;
//        }
//        start=temp;
        cout<<"insertion into sorted linked list : "<<endl;

        start=insertsorted(start);
          while(start!=NULL)
            {
            cout<<start->age<<endl;
            start=start->link;
            }
        start=temp;

    return 0;

}

