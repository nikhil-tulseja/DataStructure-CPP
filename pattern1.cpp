#include<iostream>
#include<stdlib.h>
using namespace std ;
void printpattern1(int r,int c)
{
    for(int i=1 ; i<=r ; i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<< j ;
        }
        cout<<endl ;
    }
}
void printpattern2(int r,int c)
{
    for(int i=1 ; i<=r ; i++)
    {
        for(int j=1 ; j<= i ; j++)
        cout<<i ;
        cout<<endl;
    }

}
void printpattern3(int r ,int c)
{
    for(int i=r ; i>=1 ; i--)
    {
        for(int j=i ;j>=1;j--)
        {
            cout<<i ;
        }
        cout<<endl;
    }
}
void printpattern4(int r)
{
    for(int i=r;i>=1;i--)
    {
        for(int j=1;j<= (2*i-1);j=j++)
        {
            cout<<j ;

        }
//        c =c-2 ;
        cout<<endl;
    }
}
void printpattern5(int r)
{
    for(int i=1;i<=r;i++)
    {
        for(int j=i;j>=1;j--)
        {
            cout<<j%2;
        }
        cout<<endl;
    }

}
void printpattern6(int r)
{
    for(int i = 1 ; i<=r ; i++)
    {
        int c=i;
        for(int k=1 ; k <= i ; k++)
            {
                cout<<r-c+1 ;
                c-- ;
            }

        for(int j=i+1 ; j <= r ; j++)
            cout<<r ;

        cout<<endl;
    }
}
void printpattern7(int r)
{
    for(int i=r;i>=1;i--)
    {
        int k=1 ;
        for(int j=1;j<=2*r;j++)
        {
            if(j<=i)
            cout<<j;
            if(j==i && j< (2*r)-(2*i))
            {
//                int temp = j ;
//                while(temp<r)
//                {
                    cout<<" ";
                //cout<<" ";
//                    cout<<" ";
//                    temp++;
//                }
            }
            if (j>i)
            {

                cout<<j-k;
                //cout<<"K: "<<k<<endl;
                k=k+2;

            }
        }
        cout<<endl;
    }
}
void printpattern8(int r )
{
    int k=1;
    for(int i=1;i<=r;i++)
    {
        int m = r-i;
        for(;m>=1;m--)
        {
            cout<<" ";
        }
        for(int j=1;j<=(2*i)-1;j++)
        {
            cout<< k ;
           k++ ;
        }
        cout<<endl;
    }
}
int conversion(int k )
{

}
void printpattern11(int r)
{
    int temp =0 ;
    for(int i=1; i<=r ; i++)
    {

        if(i==1)
        {
            for(int k=1;k<=r;k++)
            {
                if(k<10)
                cout<<"0"<<(k)<<" ";
                else
                cout<<k<<" ";
//                cout<<k<<" ";10
            }
            cout<<endl ;
        }
        if(i>=2 && i <=r-1 )
        {
            for(int j=1 ; j <= r ; j++)
            {
                if(j==1)
                {
                    cout<<(4*r-4)-temp<<" " ;
                    temp++;
                }
                else if(j >= 2 && j<=r-1 )
                {
                    cout<<" ";
                    cout<<" ";
                    cout<<" ";
                }
                else if(j==r)
                {
                    cout<<r+temp<<" " ;
                    cout<<endl;
                }
            }
        }
        if(i == r)
        {
            for(int j =r; j>=1 ; j--)
            {
                cout<<(4*r-4)-temp<<" ";
                temp++ ;
            }

        }

    }
}
void printpattern9(int r)
{
    int temp=0;
    for(int i=1; i<=r ; i++)
    {
        if(i==1)
        {
            for(int k=1;k<=r;k++)
            {
                if(k<r)
                cout<<"0"<<(k)<<" ";
                else
                cout<<k<<" ";
//                cout<<k<<" ";10
            }
            cout<<endl ;
        }
        if(i>=2&&i<=r-1)
        {
            int newtemp=1;
            for(int j=1 ; j <= r ; j++)
            {
                if(j==1)
                {
                    cout<<(4*r-4)-temp<<" ";
                    temp++;
                }
                else if( j >= 2 && j<=r-1 )
                {
//                    cout<<"yaha aa gya !!! ";
                    cout<<(4*r-4)-temp+1+newtemp<<" ";
//                    cout<<" ";
//                    cout<<" ";
                    newtemp++ ;
                }
                else if(j==r)
                {
                    cout<<r+temp<<" " ;
                    cout<<endl;
                }
            }
        }
        if(i == r)
        {
            for(int j =r; j>=1 ; j--)
            {
                cout<<(4*r-4)-temp<<" ";
                temp++ ;
            }

        }

    }
}

int main()
{
    int r ,c ;
    cout<<"Enter number of Rows and Columns !!"<<endl;
    cin>>r;
    //printpattern1(r,c);
    printpattern9(r);
}
