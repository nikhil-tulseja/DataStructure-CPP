#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std ;
 int fibo(int n)
{
    int phi = 1.618 ;
//  unsigned long int F =(((pow(1.6,n))–(pow(–0.61,n)))/(2.23));
    cout<<pow(phi,n)<<endl;
 int F = round(pow(phi,n)/sqrt(5));
 cout<<F<<" ";
 return F ;
}
int main()
{
    int n ;
    cout<<"enter number to check: "<<endl ;
    cin>>n ;

    for(int i=1;i<=49;i++)
    {
     int check = fibo(i);
     cout<<check<<" ";
     if(check==n)
     cout<<"ISFIBO"<<endl;
     else
     cout<<"ISNOTFIBO"<<endl;

    }


return 0 ;
}
