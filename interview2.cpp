#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
    int a=1,b=1,c=1,res;
    cout<<a<< ", ";
        cout<<b<< ", ";
    while(c<=100)
    {
//        cout<<"fibonacci"<<endl;
            res=a+b;
            cout<<res<<",";
            a=b;
            b=res;
            c++;
    }

}
