#include<iostream>
#include<stdlib.h>

using namespace std ;
int binarysearch(int a[],int low ,int high ,int k )
{
    if(low > high )
    {
      cout<<"hb"<<endl;
      return 0 ;
    }
    int mid = (low + (high-low))/2 ;
    cout<<a[mid]<<endl;

    if(a[mid] >= k )
    return 1 ;

    else if(a[mid] < k )
    return (binarysearch(a,low,mid-1,k) || binarysearch(a,mid+1,high,k) );


}
int main()
{
    cout<<"enter number of test cases !! "<<endl ;
    int t ;
    cin>>t ;

    while(t)
    {
        int n , k ;
        cout<<" enter number of rooms "<<endl ;
        cin>>n ;
        cout<<"enter number of minimum chocolates to taste !! "<<endl;
        cin>>k ;
        bool flag = false ;
        cout<<"Now enter all the choclates "<<endl ;
        int a[n];
        string choc ;
        for(int i= 0 ; i < n ; i++ )
        {
            cin>>a[i];
            cin>>choc ;
//            if(a[i] >= k )
//            flag = true ;
        }
        cout<<"value of k is : "<<k<<endl ;
//        if(flag)
//        cout<<"1"<<endl ;
//        else
//        cout<<"-1"<<endl ;
        int output = binarysearch(a,0,n,k);
        cout<<output<<endl;
        t-- ;
    }
}
