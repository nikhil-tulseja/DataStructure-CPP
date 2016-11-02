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
    int j =     lo-1 ;
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
    cout<<"enter t : "<<endl ;
    cout<<"enter n  :"<<endl ;
    int n ,t, k ;
    cin>>t ;

    while(t)
    {
    cin>>n>>k ;
    int a[n+4],s1=0 ,s2=1,b[n+4],p ;
   // cout<<"Enter array 1 : "<<endl;
        // ^^^ ARAYYY ^^^^^ /////
    for(int i=1 ; i <= n ; i++ )
    b[i] =0 ;

    for( int i=1;i<=k;i++ )
    {
       // cout<<"Value of K is : "<<k<<endl ;
        for(int i=1;i<=n;i++)
        cin>>a[i];

        quicksort(a,1,n);

        //cout<<"Adding it to another array !! "<<endl ;
        for(int i=1;i<=n;i++)
        {
            b[i]=b[i]+a[i];
        }
    }
    for(int i=1;i<=n;i++)
    {
        //cout<<"Multiplying !! "<<endl;
        s2 = s2*b[i] ;
    }
           // cout<<"Calculating s1 : "<<endl;
        s1 = s1+b[1];
       // cout<<"Value of s1 is : "<<s1<<endl ;


    //cout<<"Value of s2 is : "<<endl;
    s2 = (s2)/n ;
    cout<<s2 <<endl;
    s1 = s1%(1000000000+7) ;
    s2=s2%(1000000000+7)  ;
    p = (s1)^(s2) ;
    cout<<"Value of p is : "<<endl ;
    cout<<endl<<p<<endl;
    cout<<(1^n)<<endl;


    t-- ;
    }

}
