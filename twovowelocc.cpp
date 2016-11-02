#include<conio.h>
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
        char a[50];
//        ={"your gracious mylord"};
        int i=0,j=0;

        cout<<"enter String"<<endl;
        gets(a);

        char *ptr;

        ptr=a;

        while(*(ptr+i)!='\0')
        {
            if(*(ptr+i)=='a'||*(ptr+i)=='e'||*(ptr+i)=='i'||*(ptr+i)=='o'||*(ptr+i)=='u')
            {
                if(*(ptr+i+1)=='a'||*(ptr+i+1)=='e'||*(ptr+i+1)=='i'||*(ptr+i+1)=='o'||*(ptr+i+1)=='u')
                {
                            j++;

                }

            }

            i++;

        }
        cout<<"number of times double vowel occurences : "<<endl;
        cout<<j<<endl;
}
