#include<iostream>
#include<stdlib.h>

using namespace std ;
void binarysearch(int *a,int e,int s,int n)
{
    int mid;
    mid = ((s+n)/2);
//    if(!(n%2))
//    mid = ((s+n)/2);
//    else
//    mid=(n/2)+1 ;
    if(e==a[mid])
    {
        cout<<"element found at : "<<mid<<endl;
        return ;
    }
    else
    if(e<a[mid])
    {
        cout<<" less than : "<<endl;
        binarysearch(a,e,1,mid-1);
    }
    else if(e>a[mid])
    {
    cout<<" greater than : "<<endl;
    binarysearch(a,e,mid+1,n);
    }

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i] ;
    }
    int element;
    cout<<"element to search : "<<endl;
    cin >>element ;
    int beg =1 ;
    binarysearch(a,element,beg,(n));

}
