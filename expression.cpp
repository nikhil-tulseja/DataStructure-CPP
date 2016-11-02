#include<conio.h>
#include<iostream>
#include<Math.h>
using namespace std;

int main()
{
        int a[5];
        int i,j,m;
        for(int m=1;m<=6;m++)
        {
            a[m]=m;
        }
        a[7]=124;
        for(int m=1;m<=7;m++)
        {
            cout<<a[m]<<endl;
        }


return 0 ;
}

