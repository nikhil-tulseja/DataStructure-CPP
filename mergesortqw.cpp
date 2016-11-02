#include<iostream>
//#include<stdio.h>
using namespace std ;
void merge(int *left , int nl ,int *right ,int nr,int *a);
void mergesort(int *a,int n)
{
    if(n<2)
    return ;
    int mid = n/2 ;
    int left[mid] ,right[n-mid];
    for(int i=0 ; i< mid ; i++)
    {
        left[i]=a[i];
    }
    for(int i=mid ;i<n ; i++)
    {
        right[i-mid]=a[i] ;
    }
    mergesort(left,mid);
    mergesort(right,n-mid);
    merge(left,mid,right,n-mid,a) ;

}
void merge(int *left , int nl ,int *right ,int nr,int *a)
{
    int i=0,j=0,k=0;
    while(i<nl && j<nr)
    {
        if(left[i]<=right[j])
        {
            a[k]=left[i];
            k++;
            i++ ;
        }
        else if (left[i]>right[j])
        {
            a[k]=right[j] ;
            k++ ;
            j++ ;
        }
    }
    while(i<nl)
    {
        a[k]=left[i] ;
        i++ ;
        k++ ;
    }
    while(j<nr)
    {
        a[k]=right[j];
        j++ ;
        k++ ;
    }
}
int main()
{
    int n ;
    cin>> n ;
    int a[n] ;
    for(int i=0 ; i< n ; i ++ )
    {
        cin>>a[i] ;
    }
    //int l[n],r[n];
     mergesort(a,n);
        for(int i=0 ;i< n; i++)
        {
            cout<<a[i]<<" " ;
        }
return 0 ;
}

