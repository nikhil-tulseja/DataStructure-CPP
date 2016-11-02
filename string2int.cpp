#include<conio.h>
#include<string.h>
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int pos,words,i,j;
    char a[5],*ptr;
    cout<<"enter string to be converted"<<endl;
    gets(a);
    ptr=a;
    int length=0;
//     while(*a)
//     {
//         length++;
//         a++;
//     }
     int ans=0,val;

                while(*ptr)
                {val=*ptr;
                val=val-48;
//                    cout<<val<<endl;
                    ans=ans*10+val;
                    ptr++;
             cout<<"And Here's The Final Integer"<<ans;
}
