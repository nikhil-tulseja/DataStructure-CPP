#include<conio.h>
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int b,count=0;
    char a[50];
    cout<<"enter String"<<endl;
    gets(a);
    char *p,*ptr;
    ptr=a;
    p=a;
    while(*ptr)
    {
        count++;
        ptr++;
    }
    for(int i=0;i<=count;i++)
    {
      if(*(p+i)=='a'||*(p+i)=='e'||*(i+p)=='i'||*(p+i)=='o'||*(p+i)=='u')
        {


//            int pos=i;
            for(b=i;b<=count-1;b++)
            {
                a[b]=a[b+1];

            }
            i=i-1;
            count--;

        }

    }
       for(int j=0;j<=count;j++)
       {
           cout<<a[j];
       }
return 0;
    }


