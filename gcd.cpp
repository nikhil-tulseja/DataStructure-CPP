#include<conio.h>
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int gcd(int,int);
int main()
{
    int a,b,c;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    gcd(a,b);
    c=gcd(a,b);
    cout<<"GCD of "<< a<<"and "<<b <<"is : " << c<<endl;

    return 0;
}
int gcd(int a,int b)
{
    if(b!=0)
    {
        if(a%b==0)
        {
            return b;

        }
        else
        {
            gcd(b,a%b);
        }
    }
    else
    return a ;
}
