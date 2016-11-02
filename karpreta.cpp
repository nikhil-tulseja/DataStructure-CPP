#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
int nodigit(int n)
{
    int d =0 ;
    while(n)
        {
        d++ ;
        n=n/10;
        }
return d ;
}
int reverse(int n)
    {
    int rev =0;
        while(n)
            {
            rev = rev*10+(n%10);
            n=n/10 ;
            }
    return rev ;
    }
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int p,q ;

    cin>>p>>q;
    int flag=0 ;
    for(long int i=p; i<=q;i++)
        {

            int d = nodigit(i);
//            cout<<"No of digits in number : "<<d <<endl;
            int right=d ;
            long int sq = i*i,r=0,l=0 ;
            int sqdig=nodigit(sq) ;
//            cout<<"No of digits in square :"<<sqdig<<endl;
            int left=sqdig-d;
            while(d)
                {
                 r=(sq%10)+r*10;
                 sq=sq/10;
                 d-- ;
                }
            while(sq)
                {
                  l=l*10+(sq%10);
                  sq = sq/10 ;
                }
            int digr=nodigit(r);
            int digl=nodigit(l);
//            cout<<"No of digits in right side :"<<digr<<endl;
//            cout<<"No of digits in left side :"<<digl<<endl;
            r=reverse(r);
            l=reverse(l);
//            cout<<"After Reversing r:"<<r <<endl ;
//            cout<<"After Reversing l :"<<l <<endl ;
            if(digr!=right)
                {
                  while(right-digr)
                      {
                       r=r*10;
                       right--;
                       }
                }
             if(digl!=left)
                 {
                  while(left-digl)
                      {
                      l=l*10;
                      left--;
                      }
                 }
//                 cout<<"Final Value of R :"<<r<<endl;
//                 cout<<"Final Value of L:"<<l <<endl;
//                 cout<<"value of i:"<<i<<endl;
            if(l+r==i)
                {
                flag=1;
                cout<<i<<" "<<endl;
                }
        }
     if(flag==0)
         cout<<"INVALID RANGE"<<endl;
    return 0;
}
