#include<conio.h>
#include<iostream>

using namespace std;
int main()
{
    int i,r,c,n=6;
    for(r=1;r<=3;r++)
    {
        for(c=1;c<=r;c++)
        {
            cout<<c;
        }
        cout<<endl;
    }
    for(r=n/2;r>=1;r--)
    {
        for(c=1;c<=r;c++)
        {
            cout<<c;
        }
        cout<<endl;
    }

}
