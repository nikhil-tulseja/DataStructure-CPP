#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    char str1[15],str2[6];
    cout<<"enter str1 :"<<endl;
    gets(str1);
    cout<<"enter str2: "<<endl;
    gets(str2);
    int i=0,j=0;
    int ilen=strlen(str1);
    int jlen=strlen(str2);
    while(str1[i]!='\0')
    {
        if(j<=jlen)
        {
            if(str1[i]==str2[j])
            {
                i++;
                j++;

            }
            else{
            i++;
            }


        }
        if(j==2)
            {
                cout<<str2<<"  is a substring of "<<str1<<"!!"<<endl;
            }

    }


}
