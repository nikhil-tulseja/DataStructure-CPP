#include<conio.h>
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j;
    char *s[]=  {
                    "To err is human...",
                    "But to really mess with things up..",
                    "One need to know c!!"

                    };

            cout<<"reverse f String"<<endl;

            for(i=0;i<=2;i++)
            {
                int length=0;
                char *p;
                p=s[i];
                while(*s[i])
                {
                    length++;
                    s[i]++;
                }
                cout<<"Length of String 1 is:"<<length<<endl;
//                cout<<*(p+length-5);
            for(j=0;j<=length;j++)
                {
                    cout<<*(p+length-j);
                }
                cout<<endl;
//                p=s[i];
//                cout<<"now Final Reversed String is: "<<endl;
//                while(*p)
//                {
//                    cout<<*p<<endl;
//                    p++;
//
//                }
//            }
            }
            }
