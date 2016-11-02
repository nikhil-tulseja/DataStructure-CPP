#include<conio.h>
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
        char a[50], b[6][10];
        char str[10]={"the"};
        int j=0,k=0;
        cout<<"enter the line: "<<endl;
    gets(a);
        char *ptr;
        int len=0;
        ptr=a;
        for(int i=0;a[i]!='\0';i++)
        {
            if(a[i]==' ')
            {
                b[j][k]='\0';
                j++;
                k=0;
            }
            else{
                b[j][k]=a[i];
                k++;
            }

        }
        b[j][k]='\0';
        cout<<j<<endl<<k;
                for(int m=0;m<j+1;m++)
                {

                    if(strcmp(b[m],str)==0)
                    {
                        cout<<"match"<<endl;
                        for(int n=m;n<j+1;n++)
                        {
                        strcpy(b[n], b[n+1]);
                            j--;

                        }
                    }

    for (int i = 0;i < j+ 1; i++)

    {

        cout<<b[i];

    }

}}

