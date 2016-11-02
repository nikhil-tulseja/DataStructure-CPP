#include<conio.h>
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    char a[200];
    int n=0,r,c,k,temp;
    cout<<"enter string"<<endl;
    gets(a);
    char *p;
    char *q;
    p=a;
    q=p;
    while(*p)
    {
        cout<<*p++;
      n++;

    }
    p--;
    p--;
        cout<<endl;
        cout<<"length is :"<<n<<endl;
        n--;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<*q++;
    }
return 0;
}
