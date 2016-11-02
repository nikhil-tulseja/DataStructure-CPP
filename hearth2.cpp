#include<iostream>
#include<stdio.h>
using namespace std ;

void swap(int *k , int *b )
{
    int t = *k;
    *k = *b;
    *b = t;
}
int partiton(int *a, int lo ,int h )
{
    int j = lo-1 ;
    int pivot = a[h] ;
    for(int i = lo ; i<=h-1 ; i++)
    {
        if(pivot>a[i])
         {
              j++ ;
              swap(&a[i],&a[j]) ;
         }

    }
    swap(&a[j+1],&a[h]);

    return j+1 ;

}
void quicksort(int *a , int lo , int hi )
{
    if(lo<hi)
    {
        int r = partiton(a,lo ,hi) ;
        quicksort(a,lo,r-1);
        quicksort(a,r+1,hi);
    }

}
int main()
{
    cout<<"enter n  :"<<endl ;
    int n ;
    cin>> n ;

    cout<<"enter array 1 : "<<endl ;
    int a[n] ;
     for(int i=1;i<=n;i++)
    cin>> a[i] ;
    cout<<"Enter array 2 : "<<endl;
    int b[n];
     for(int i=1;i<=n;i++)
    cin>>b[i] ;

    quicksort(a,1,n);
    quicksort(b,1,n);
    int q ;
    cout<<"enter queries !! "<<endl ;
    cin>>q ;
    int sum= 0  ;
    for(int i = n-q+1 ; i <= n ; i++ )
    {
        sum = sum + a[i] ;

    }
    cout<<sum<<endl ;
}
