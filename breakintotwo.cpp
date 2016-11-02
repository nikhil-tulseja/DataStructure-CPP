#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main()
{
    int i=0,j,k,g;
    char a[50];
    char b[50],c[50];
    cout<<"enter string to be broken "<<endl;
    gets(a);
    char *first =a;
    char *second =a;
    char *count=a;

    while(*count)
    {
        *count++;
        i++;
    }
cout<<"total chars in string is : "<<i<<endl;

j=i/2;
g=i-j;
cout<<j<<endl<<g;
*count--;
for(k=0;k<j;k++)
{
    b[k]=(*first);
    *first++;
}
while(j>0)
{

    *count--;
    j--;
}
cout<<"now j is : "<<j;
for(int f=0;f<g;f++)
{
    c[f]=(*count);
    *count++;
}

cout<<"final arrays are : "<<endl;

for(k=0;k<g;k++)
{
    cout<<b[k];
}
cout<<endl<<"secont string is :";
for(int h=0;h<=g;h++)
{
    cout<<c[h];
}
//int l=strlen(b);
//int ls=strlen(c);
//cout<<"length of strings are :"<<endl;
//cout<<l<<endl;
//cout<<ls;


return 0;
}
