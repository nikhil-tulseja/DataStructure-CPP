#include<iostream>
#include<stdlib.h>
using namespace std;
void fib(int n);
int main(){

    cout<<"entre num!! "<<endl;
    int num;
    cin>>num;

    fib(num);

}
void fib(int n)
{
    static int a=0,b=1,sum;
    if(n>1)
    {
        sum=a+b;
        cout<<sum<<", ";
        a=b;
        b=sum;

        fib(n-1);
    }

}
