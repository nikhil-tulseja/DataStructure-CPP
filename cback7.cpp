#include<conio.h>
#include<iostream>
#include<stdio.h>
#include<Math.h>
#include<stdlib.h>
using namespace std;

int main()
{   //octal conversion
    int num,b,count=0,i=0,l=0;
    int a[8];
    cout<<"enter int"<<endl;
    cin>>num;
    for(;num>0;)
    {

    b=num%8;
     a[i]=b;
     i++;
     l++;
    if(num>8)
    {
    cout<<"separately digits are : "<<endl;
    cout<<b<<endl;
    }
    num=num/8;
//    cout<<"value of num"<<num<<endl;
    if(num<8&&num!=0)
    {
        cout<<num<<endl;

    }
    }
    for(i=l-1;i>=0;i--)
    {
        cout<<a[i];
    }
    return 0;
}
