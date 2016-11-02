#include<iostream>
#include<string>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int xstrcmp(char *,char *);
int main()
{
    char a[20],b[20];
    gets(a);
    gets(b);

 int k=xstrcmp(a,b);
    cout<<k;
return 0;
}

int xstrcmp(char *a, char *b)
{
    while (*a && *b && *a == *b) { ++a; ++b; }
    return *a - *b;
}
