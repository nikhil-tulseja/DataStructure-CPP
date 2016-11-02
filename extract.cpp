#include<conio.h>
#include<string.h>
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int pos,words,i,j;
    char c[]="Working with string is fun";
    cout<<"enter position"<<endl;
    cin>>pos;
    cout<<"enter the no of words to be extracted"<<endl;
    cin>>words;

    char *ptr,ans;
    ptr=c;


        for(int k=1;k<=words;k++)
        {
            cout<<*(ptr+pos-1)<<endl;
            pos++;
        }



}
