#include<iostream>
#include<stdlib.h>
using namespace std ;
void insertionsortre(int *a , int first, int last)
{
//    int j ;// 3,0,4,5,2,6,7
    if(first<last)
    {
        insertionsortre(a,last-1);
        insertinordr(a[last],a,first,last);
    }
}
void insertinordr(int element , int *a, int first,int last)
{
    if(element<a[last])
    {
        a[last+1] = element ;
        a[last-1]
    }
}
int main()
{
    int n ;
    cout<<"NO of elements ? "<<endl;
    cin>>n ;
    int a[n] ;
    for(int i=1 ; i<=n ; i++)
    cin>>a[i] ;

    insertionsortre(a,n);
    for(int i=1; i<=n;i++)
    cout<<a[i]<<endl;

}
