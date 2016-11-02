#include<conio.h>
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
//int  *recf(int *q,int);
int main()
{
    int a[20];
    int i,j,k,h,si,ei;
    cout<<"enter array"<<endl;
    int num;
    int count;
    for(i=0;i<11;i++)
    {
        cin>>a[i];

    }
        cout<<"enter num:"<<endl;
        cin>>num;

        int *ptr;
        ptr=a;
    for(j=0;j<11;)
    {
        count=0;
        if(*(ptr+j)==num)
        {       cout<<*(ptr+j)<<endl;
        cout<<j<<":J"<<endl;
            si=j;
            for(h=j+1;h<11;h++)
            {
                if(*(ptr+h)==num)
                {
                    cout<<"h:"<<h<<endl;
                    count++;
                }


            }
            cout<<"Count"<<count<<endl;
        ei=si+count;
        }

    if(count>0)
    {
    j=j+count+1;
    cout<<"J:"<<j<<endl;
    }

    else
    {
    j++;
    cout<<"J:"<<j<<endl;
    }

    }
//        printf("hey\n");

        cout<<si<<endl<<ei<<endl;
}
