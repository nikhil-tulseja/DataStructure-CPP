#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std ;
bool checkpalin(int a)
{
    int temp =a, t ,rev=0,i=0;
    if(!(temp&1))
    return 0;
    double x = ceil(log2((double)a));
    i = x-1;
    while(temp)
    {
        t = temp%2 ;
        rev = rev + t*pow(2,i) ;
        temp = temp/2 ;
        i--;
    }

    cout<<rev<<endl ;
    return rev==a ;
}
int main()
{
    int a  ;
    cout<<"enter Number "<<endl ;
    cin>>a ;

    bool x = checkpalin(a);
     if(x)
     {
         cout<<"Binary representation is palindrome !! "<<endl ;

     }
     else
         cout<<"Binary representation is not palindrome !! "<<endl ;
 return 0 ;
}
