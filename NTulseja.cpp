#include<conio.h>
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int i;
    char a[25],b[4][10];
    cout<<"enter name"<<endl;
    gets(a);
    int j=0,k=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            j++;
            b[j][k]='\0';
            k=0;
        }
        else{
            b[j][k]=a[i];
            k++;
        }
    }
        for(int n=0;n<j+1;n++)
        {
            if(n!=j)
            for(int m=0;m<1;m++)
            {

                cout<<b[n][m]<<".";
            }
            else
            for(int m=0;m<k;m++)
            {
                cout<<b[n][m];
            }
        }


}
