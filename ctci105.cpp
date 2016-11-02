#include<iostream>
using namespace std ;

int main()
{
    int m , n ;
    cin>>m>>n ;
    int a[m][n] ;
    cout<<"Enter Values "<<endl;

    for(int i = 0  ; i < m ; i++)
    {
        for(int j = 0 ; j< n ; j++)
        {
            cin>>a[i][j];
        }
    }
    int b[m][n] ;
    for(int i = 0 ; i < m ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
             if(a[i][j] == 0)
             {
                 for(int k = 0 ; k < m ;k++)
                    b[k][j] = 0 ;
                 for(int k = 0 ; k < n ;k++)
                    b[i][k] = 0 ;

             }
             else if (b[i][j] != 0 )
                    b[i][j]=a[i][j] ;
        }
    }
    for(int i = 0  ; i < m ; i++)
    {
        for(int j = 0 ; j< n ; j++)
        {
            cout<<b[i][j]<<" ";
        }
    }


    return 0 ;
    }
