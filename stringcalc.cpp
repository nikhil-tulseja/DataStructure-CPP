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
    int len=strlen(a)-1;
//    char *len,*str;
//    len=a;
//    while(*len)
//    {
//        count++;
//        len++;
//    }
//    cout<<count;
    double fnum=0,snum;
    char op;
//    str=a;
    for(i=0;i<len;i++)
        {
                if(a[i]=='*'||a[i]=='+'||a[i]=='-'||a[i]=='/')
                {
                    cout<<a[i]<<endl;
                    op=a[i];
                    break;
                }

        }
        cout<<"value of I : "<<i<<endl;

        int j;

        if(fnum==0)
        {
        j=0;
        }

        loop:
        double val=1.0,f=0.0;
        while(a[j]!='.')
            {
                fnum=fnum*10+(a[j]-'0');
                j++;
            }
            j++;
        while(j<i)
        {
            cout<<"value of I : "<<i <<endl;
            val=val*0.1;
            f=f+val*(a[j]-'0');
            j++;

        }
            fnum=fnum+f;
        cout<<fnum<<endl;


    if(j==i)
    {
        j=i+1;
        i=len+1;
        snum=fnum;
        fnum=0;
        goto loop;
    }
    cout<<"value of snum : "<<snum<<endl;
    cout<<"value of fnum: "<<fnum<<endl;
}


