#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
class space
{
    char name[10];
    int c;
    public :
    friend int operator==(space & s1,space & s2);
    void putstring(char *a)
    {
        strcpy(name,a);
    }

};
int operator==(space & s1,space & s2)
{
//    char str[10],str1[10];
    char *a,*b;
    a=s1.name;
    b=s2.name;
    cout<<s2.name<<endl;
    cout<<s1.name<<endl;
//    cout<<*a<<endl;
    while(*a && *b && *a==*b)
    {
        cout<<*a<<endl;
        cout<<*b<<endl;
        a++;
        b++;

    }
    cout<<*a-*b<<endl;
    return (*a-*b);
}
int main(){

    space s1;
    s1.putstring("hello");
    space s2;
    s2.putstring("hello");

    if(!(s1==s2))
    cout<<"SAME!!"<<endl;
    else
    cout<<"Fuck off!! "<<endl;
}
