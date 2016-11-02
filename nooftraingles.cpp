#include<iostream>
using namespace std ;
int numoftraingles(int a[],int n)
{
    int i,j,k,count=0  ;
    for(i=0;i<n-2;i++)
    {
        k=i+2;
        for(j=i+1;j<n;j++)
        {
            while(k<n && a[i] + a[j] > a[k] )
                k++;
        count=count+k-j-1;
        }

    }
    return count ;
}
int main()
{
    int a[] = {10, 21, 22, 100, 101, 200, 300   } ;
    int n = sizeof(a)/sizeof(a[0]);
    int num = numoftraingles(a,n );
    cout<<"number of traingles that can be formed from these numbers are : "<< num <<endl ;

}
