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

void swap(st **start)
{
    st *save,*ptr;
//    temp =(st*)malloc(st);

    save=*start;
//    temp=start;
    ptr=(*start)->link;

    *start=ptr;
    while(true)
    {
        cout<<"loop k andar hu!! "<<endl;
        st *ptr1=ptr->link;
        ptr->link=save;
        if(ptr1==NULL || ptr1->link==NULL)
        {
            save->link=ptr1;
            break;

        }

        save->link=ptr1->link;

        save=ptr1;
        ptr=save->link;

    }

//    return start;
}

int main()
{
    st *start,*ptr,*temp;

    ptr=create();
        start=ptr;
    temp=start;
    while(start!=NULL)
    {
        cout<<start->age<<endl;
        start=start->link;

    }
    start=temp;

    cout<<"SWAPPING!! "<<endl;
    swap(&start);
    start=temp;
    while(start!=NULL)
    {
        cout<<start->age<<endl;
        start=start->link;
    }
        return 0;
}
