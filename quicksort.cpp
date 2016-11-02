#include<iostream>
#include<stdio.h>
using namespace std ;

void swap(int *k , int *b )
{
    int t = *k ;
    *k = *b ;
    *b = t ;
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
         swap(&a[j+1],&a[h]);

    }

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
    int n ;
    cin>> n ;
    int a[n];
    for(int i=1;i<=n;i++)
    cin>>a[n];

    quicksort(a,1,n);

    for(int i=1 ;i<=n ; i++)
    cout<<a[i]<<" ";


}
