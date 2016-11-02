#include <stdio.h>
#include <iostream>
using namespace std;
int BinarySearch(int ele, int *c , int l , int r )
{
    if(r >= l)
    {
        int mid = (l+r)/2 ;
        if(ele == c[mid])
        return mid+1 ;
        else if(ele < c[mid] )
        {
//            return mid+1;
            if(  mid > 0 && ele <= c[mid - 1])
            BinarySearch(ele,c,l,mid-1) ;
            else
            return mid + 1 ;
        }
        else
        {
            BinarySearch(ele,c,mid+1,r) ;

        }

    }
}
int main()
{
    int n ;
    cin>>n ;

    int c[n] ;
    for(int i=0 ; i < n ; i++)
    {
        cin>>c[i] ;
        if(i > 0 )
        {
            c[i] = c[i] + c[i-1] ;
        }
    }
    int q ;
    cin>>q ;
    int query[q] ;
    for(int j = 0 ; j< q ; j++)
    {
        cin>>query[j] ;
    }
    for(int j= 0 ; j< q ; j++)
    {
        cout<<BinarySearch(query[j],c,0,n)<<endl ;
    }

}
