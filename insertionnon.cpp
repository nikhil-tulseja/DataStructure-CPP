#include<iostream>
#include<stdlib.h>

using namespace std ;
void insertionsort(int *a,int l )
{
    int i,j;
    for(j=2; j<=l;j++)
    {
        int key=a[j];
        i=j-1;
        while(i>0 && a[i]<key)
        {
          a[i+1]=a[i];
          i=i-1 ;
        }
        a[i+1]=key ;
    }

}
int main()
{
    cout<<"enter length : "<<endl;
    int l ;
    cin>>l ;
    int a[l];
    for(int i=1 ; i<=l ;i++ )
    {
        cin>>a[i];
    }
    insertionsort(a,l);
    for(int i=1;i<=l; i++)
    cout<<a[i]<<endl;
}
