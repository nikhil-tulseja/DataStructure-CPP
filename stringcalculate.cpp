#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int i,count=0;
    char a[15];
    cout<<"entre String "<<endl;
    gets(a);
    char *len,*str;
    len=a;
    while(*len)
    {
        count++;
        len++;
    }
    cout<<count;
    double fnum=0,snum;
    char op;
    str=a;

    while(*str !='.')
    {
        fnum=fnum*10+(*(str)-'0');
        str++;

    }
    cout<<fnum;
    str++;
    double f=0.0,val=0.1;
    cout<<"after decimal point"<<endl;
//    cout<<*len<<endl;
    while(count>=0)
    if(*str == '+' || *str == '-'  || *str == '*'|| *str == '/')
    {
        cout<<*str<<endl;
        f=f+val* ((*str)-'0');
        val=val*0.1;
        str++;
        }
    fnum=fnum+f;
    cout<<"value of fnum is : "<<fnum<<endl;
    op=*len;

//    switch(op)
//    {
//        case '+':
//        {
//
//            break;
//        }
//        case '-':
//        {
//
//            break;
//        }
//        case '*':
//        {
//
//            break;
//        }
//        case '/':
//        {
//
//            break;
//        }

    }





