#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    char a[10];
    cout<<"entre num"<<endl;
    int  n;
    cin>>n;

    int i=0;
    while(n)
    {

        a[i++]=(n%10);

        n=n/10;
        cout<<a[i-1]<<endl;
    }
    for(int j=i;j>=0;j--)
        {
            cout<<a[j];

        }

        return 0;
}
