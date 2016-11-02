#include<iostream>
#include<string.h>
#include<vector>
using namespace std ;
void merge(int *left, int nl , int *right , int nr )
{
    int i =0 , j=0, k=0 ; int a[nl+nr]  ;
    while(i<nl && j < nr )
    {
        if(left[i]<=right[j])
          {a[k]=left[i] ;
           i++ ;
          }
          if(right[j]<=left[i])
           {
               a[k]=right[j] ;
               j++ ;

           }
           k++ ;
    }
    while(i<nl)
     {
         a[k] = left[i] ;
         i++ ; k++ ;
     }
     while(j<nr)
     {
         a[k]= right[j] ;
         j++ ;
         k++ ;

     }
}
void mergesort(int *a, int n )
{
    if(n < 2)
    return ;
    int mid=n/2;
    int left[mid],right[n-mid];
      for(int i=0;i<n; i++)
      {
          if(i<mid)
           left[i]=a[i];
           else
           right[i-mid]=a[i] ;

      }
      mergesort(left,mid) ;
      mergesort(right,n-mid);
      merge(left,mid,right,n-mid) ;

}
int main(){

  int n ;
  cin>>n ;
  int a[n], b[100] ;
  string input ;
vector<string>v ;
  for(int i=0 ; i< n ; i++)
  {
      cin>>a[i] ;
      getline(cin,input);
      v.push_back(input);

  }
  int twist = n/2 ;
  for(int i=0;i<twist;i++)
  v[i]="-";
    for(int i =0 ; i< n ; i++)
    //cout<<v[i]<<" ";
     for(int i=0;i<100;i++)
        {
            b[i]=0 ;

        }
        for(int i=0 ; i<n ; i++)
            b[a[i]]++ ;
    for(int i=0;i<n;i++)
    {
        if(b[i]>0 )
        cout<<v[i]<<" " ;
    }
    mergesort(b,n);
    for(int i=0 ; i< n ; i++)
    cout<<b[i]<<" " ;
    for(int i=0 ; i< n ; i++)
    {
        if(b[i]>0)
         cout<<v[i]<<" " ;

      //cout<<b[i]<<" " ;
    }


return 0 ;
}
