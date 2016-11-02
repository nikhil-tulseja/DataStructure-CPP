#include<iostream>

using namespace std ;
void insertionsort(int *a, int n )
{
    for(int i=1;i<n;i++)
    {
        int value =a[i] ;
        int j=i-1 ;
        while(j>=0 && a[j]>value)
        {

            a[j+1]=a[j];
            j-- ;
        }
        a[j+1] =value ;
    }
     for(int i =0 ; i<n ; i++ )
     cout<<a[i]<<" ";

}

int main()
{
    int n ;
    cin>>n ;
    int a[n] ;
    for(int i=0 ; i< n ;i++)
    cin>>a[i];

    insertionsort(a, n) ;
}
