#include<iostream>
#include<stdlib.h>
using namespace std ;

void determine(int *a , int x , int len)
{
    for(int i=1 ; i<=len ; i++)
    {
        int diff = abs(a[i]-x) ;
        int count=0 ;
        for(int j=i+1;j<=len; j++)
        {
            count++;
            if(a[j]==diff)
            {
                cout<<" yes!! " ;
                break ;
            }


        }
        cout<<count<<endl;
    }

}
int main()
{
    int n ;
    cin>>n ;
    int a[n] ;
    for(int i=1 ; i<= n ; i++)
    cin>>a[i] ;
    cout<<" enter element x "<<endl ;
    int x ;
    cin>>x ;

    determine(a,x,n);

}
