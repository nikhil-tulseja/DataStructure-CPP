#include<conio.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int a,num,j,no,count,i=3;
    cout<<"enter the number of prime numbs you want to print out : "<<endl;
    cin>>no;
//        cout<<"2"<<endl;

    for(count=2;count<=no;)
    {

    for(a=2;a<=i-1;a++)
    {

        if(i%a==0)
        {
            break;
        }

    }
    if(a==i)
    {
        cout<< a<<endl;
    count++;

    }
    i++;

    }



cout<<endl<<count;
     return 0;
}
