
#include<iostream>
void inversion(int a[],int n )
{
    int max = a[n-1] ;
    for(int i=n-2,i>=0 ; i--)
    {
        if(max<a[i])
        {

        }
    }
}
int main()
{
    int a[]= {2,4,1,3,5,6} ;
    int size = sizeof(a)/sizeof(a[0]) ;
    inversion(a,size) ;

}
