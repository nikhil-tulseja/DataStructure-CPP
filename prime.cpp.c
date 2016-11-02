#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a,b;
    cout<<"print prime numbers upto 50"<<endl;
    cout<<"enter number u wnat to check"<<endl;
    cin>>b;

    int count=0;
    for(a=2;a<=b/2;a++)
    {
        if(b%a==0)
        {
            count++;
        }

    }
    if(count>=1)
    {
        cout<<b <<"is not a prime number";

    }
    else{
        cout<< b <<"is a prime number";
    }
}
