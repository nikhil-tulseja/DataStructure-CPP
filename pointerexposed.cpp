#include<conio.h>
#include<iostream>

using namespace std ;

int main()
{
    int a[10][10];
    int **ip;

    cout<<"enter array"<<endl;
    for(int i=0;i<10;i++)
{   for(int j=0;j<10;j++)
    {
            cin>>a[i][j];
    }
}
        *ip=&a;

    cout<<*ip;
return 0 ;

}
