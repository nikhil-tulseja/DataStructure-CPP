#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a,b,n,c;
//    cout<<"print prime numbers upto 50"<<endl;

int nm=0,nn=0;

    cout<<"enter number upto which u want to print prime numbers"<<endl;
//    cin>>c;


    for(;nm<1;)
    {
        int count;

    for(n=2;n<8000;n++)
    {
        count=0;
    for(a=2;a<=n/2;a++)
    {
        if(n%a==0)
        {
            count++;
            break;

        }

    }
    if(count>=1)
    {
        cout<<n <<"is not a prime number";
        cout<<endl;
    }
    else{
        cout<< n <<"is a prime number";
        cout<<endl;
            nn++;

    }
    if(nn==1003)
    break;
    }
    cout<<"total prime are "<<nn;
    nm=nn;

    }



return 0;
}
