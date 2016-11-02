#include<conio.h>
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,len1=0,len2=0,len3=0,l,m,n;
    char str1[10],str2[10],demo1[100],demo2[10];
    char *s[]=  {
                    "To err is human...",
                    "But to really mess with things up..",
                    "One need to know c!!"

                    };
                cout<<"Enter String 1: "<<endl;
                cin>>str1;
                cout<<"Enter String 2: "<<endl;
                cin>>str2;

//                cout<<"Length:"<<endl;
//                for(j=0;j<=2;j++)
//                while(*s[j]!='\0')
//                {
//                    if(j==0)
//                    len1++;
//                    if(j==1)
//                    len2++;
//                    if(j==2)
//                    len3++;
//                }
                for(i=0;i<12;i++)
                {
                    int len=0;
                    char *p=s[i];
                    while(*p)
                    {
                        len++;
                        p++;
                    }
                    cout<<len<<endl;
                   char *was=s[i];

                    for(int l=0;l<=len;l++)
                    {
//                        cout<<*(p+l)<<endl;
                    int k=0,val=l;
                    while(*(was+val)!=' ')
                    {


                        demo1[k++]=*(was+val);
                        val++;
//                        p++;
                    cout<<demo1[k];
                    }
//                    if(strcmp(demo1,str1))
//                    {
//                            cout<<"not same"<<endl;
//                    }
//                    else
//                    {

//                            int pos=l;
//                            char *n;
//                            n=str2;
//                            while(*n)
//                            {
//
//                                *(p-pos)=*n;
//                                pos++;
//                                n++;
//                            }


                        }
//                        p=s[i];
//                    while(*p)
//                    {
//                        cout<<*p;
//                        p++;
//                    }
//
//                }
                }

}
