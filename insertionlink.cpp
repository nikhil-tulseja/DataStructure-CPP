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
st *insertsorted(st *start, int d)
{
    st *t,*temp;
    t=(st*)malloc(sizeof(st));
    temp=start;
    t->age=d;
    st *save;
    while(temp!=NULL)
    {
        save=temp;
        temp=temp->link;
      if(t->age< save->age)
      {
          t->link=save;
          start=t;

          return start;
      }
      else if(t->age > save->age )
      {
          t->link=save->link;
          save->link=t;

          return start;
      }



    }

}
        int main()
        {
            st *start,*ptr;

            ptr=create();
                start=ptr;
            while(ptr!=NULL)
            {
                cout<<ptr->age<<endl;
                ptr=ptr->link;
            }
            st *n;
            cout<<"enter data"<<endl;
            int b;
            cin>>b;
            n=insertsorted(start,b);
            while(n!=NULL)
            {
                cout<<n->age<<endl;
                n=n->link;
            }

        }

