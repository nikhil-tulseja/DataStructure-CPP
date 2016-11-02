#include<iostream>

using namespace std ;
#define MAX 100000
void printpairs(int *a, int sum , int n )
{
    int i, temp ;
    bool binMap[MAX]={0};
    for(i=1; i<=n ; i++)
    {
        temp=sum-a[i];
        if(temp>=0 && binMap[temp]==1)
        {
            cout<<"pair is : "<<a[i]<<" "<<temp<<endl;
        }
        binMap[a[i]]=1 ;
    }
}
int main()
{
    int n ;
    cin>>n ;
    int a[n] ;
    for(int i=1 ; i<= n ; i++)
    cin>>a[i] ;
    cout<<" enter element x "<<endl ;
    int x ;
    cin>>x ;

    printpairs(a,x,n);

}
