#include<conio.h>
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
//int  *recf(int *q,int);
int main()
{
 char str[20];
 char a[2],*p;
    int i,j,temp;
 cout<<"entre String"<<endl;
 gets(str);
 p=str;
 int len=0;
    for(int k=0;*(str+k)!='\0';k++)
    {
        len++;
    }


 for(i=0;*(str+i)!='\0';i++)
 {
     int count=0;
//     char *b=*(p+i);
     count++;
     for(j=i+1;*(str+j)!='\0';j++)
     {
         if(*(str+j)==*(p+i))
         {

             count++;

         }
    }
    temp=count;
    if(count>2)
    {
        while(count>2)
        {
        for(int m=i+1;*(str+m)!='\0';m++)
            {
                *(str+m)=*(str+m+1);

            }
        count--;
        len--;
        }

    }
    if(count>1)
    {
              sprintf(a,"%d",temp);
            *(str+i+1)=*a;

    }



 }
    cout<<"Final String is : ";

    for(int l=0;l<len;l++)
    {

        cout<<*(str+l);
    }
}
