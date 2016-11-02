#include<iostream>
#include<stdlib.h>
using namespace std ;

int findMissing(int array[], int strt, int end) {


    if (strt != array[strt])
      return strt;

    int mid = (strt + end) / 2;

    if (array[mid] > mid)
      return findMissing(array, strt, mid);
    else
      return findMissing(array, mid + 1, end);
}


int main()
{
    int n ;
    cout<<"enter n "<<endl;
    cin>>n ;
    int a[n];
    for(int i=1 ; i<=(n-1); i++)
    {
        cin>>a[i];
    }
    //int mid = (1+n)/2 ;
      //missingbinary(a,1,n+1);
     //   cout<<a<<endl ;
   int x = findMissing(a,1,n);
   cout<<x<<endl;
}
