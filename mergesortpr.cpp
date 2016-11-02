#include<iostream>

using namespace std ;
int merge(int a[], int l ,int m , int r)
{
    int i,j,k ,inv =0 ;
    int n1 = m-l+1 ;
    int n2 = r-m ;
    int L[n1] , R[n2] ;
    for(i=0 ; i<n1 ; i++ )
     L[i]= a[l+i] ;
    for(j=0 ; j<n2 ; j++ )
     R[j]= a[m+j+1] ;
    i=0;j=0;k=l ;
    while(i<n1 && j <n2 )
    {
        if(L[i]<=R[j])
        {
            a[k] = L[i] ;
            i++ ;
        }
        else
        {
            a[k]= R[j] ;
            j++ ;
            inv = inv+ m - i ;
        }
        k++ ;
    }
    while(i<n1)
    {
        a[k] = L[i] ;
        i++ ;
        k++ ;
    }
    while(j<n2)
    {
        a[k] = R[j] ;
        k++ ;
        j++ ;

    }
 return inv ;

}

int mergesort(int a[] ,int l, int r )
{
    int mid ,inv =0 ;
    if(l<r)
    {
    mid = (l+r)/2 ;
    inv = mergesort(a,l,mid) ;
    inv += mergesort(a,mid+1,r);

    inv += merge(a,l,mid,r);
    }
    return inv ;
}
int main()
{
    int a[] = {5,6,8,999,12,-1 } ;
    int size = sizeof(a)/sizeof(a[0]) ;
    int inv = mergesort(a,0,size-1) ;
    for(int i =0 ; i<size ; i++ )
    {
        cout<< a[i]<<endl ;


    }
    cout <<inv <<endl ;
}
