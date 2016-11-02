#include<conio.h>
#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
    int a[20],min=1,max=0;
    char ch='y';
    int i,count=0;
    cout<<"finding diff between min and max "<<endl;
    cout<<"enter the set of numbers ?"<<endl;
    for(i=0;ch=='y';i++)
    {
        cout<<"enter num"<<endl;
        cin>>a[i];
        if(a[i]>max)
        {
            max=a[i];

        }


            count++;
        cout<<"want to enter more ? y/n "<<endl;
        cin>>ch;

    }
    min=a[0];
        for(int j=0;j<count; j++)
        {
            cout<<"array's" <<j<<"th element is"<<a[j]<<endl;
            if(a[j]<=min)
            {
            min=a[j];
            }

        }

    cout<<min<<endl<<max<<endl;
    cout<<"final diffrences between"<<min<<"and "<<max <<"are : "<<endl;
    cout<<max-min;


    return 0;
}
