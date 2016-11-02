#include<conio.h>
#include<iostream>
#include<stdio.h>


using namespace std;
int main()
{
 char a[50];
 int i=0,j,k;

    cout<<"enter string to be reversed "<<endl;
    gets(a);
 char *rev=a;
 while(*rev)
 {
     rev++;
     i++;

 }
 cout<<"no of chars in string is "<<i<<endl;
 while(i>0)
 {
     *rev--;
          cout<<*rev;
     i--;
 }

    return 0;
}
