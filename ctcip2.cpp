#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std  ;
void swap(char *a , char *b)
{
    cout<<"Swap func"<<endl ;
    cout<<*a<<endl ;
    cout<<*b<<endl ;
    char temp = *a ;
    *a = *b ;
    *b = temp ;

}
void reverse(char *a, int len)
{
    int i=0,j=len-2;
    while( i < j)
    {
        cout<<"Swapping "<<endl ;
        swap(&a[i],&a[j]);
        i++ ;
        j-- ;
    }

    i=0;
    while(a[i] != '\0')
    {
        cout<<a[i];
        i++ ;
    }

}
int main()
{
//    string str ;
//    cin>>str ;
    char a[] = "naman";
    int len = sizeof(a)/sizeof(a[0]);
    cout<<len<<endl;


    reverse(a,len);
//    printString(a) ;

    return 0 ;

}
