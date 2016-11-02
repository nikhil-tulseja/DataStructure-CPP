#include<iostream>
#include<stdio.h>
using namespace std ;
int checkgcd(int a ,int b ) ;
int *sortarray(int array[], int length);
int *sortarray(int array[], int length)
{
    int max ;
    for(int i=0 ; i<length ; i++)
    {
        max = array[i];
        for(int j=i+1;j<length;j++)
        {
//            cout<<j<<"th element : "<<array[j]<<endl ;
            if(max<array[j])
            {
             max=array[j] ;
             array[j]=array[i] ;
             array[i]=max;
            }
//            cout<<"NOW "<<j<<"th element : "<<array[j]<<endl ;
        }
//        cout<<"MIN: "<<min<<endl;

    }
    return array ;
}
int checkgcd(int a , int b )
{
 cout<<"GCD of : "<<a <<"and "<< b <<"is : "<<endl;
    if(b==0 || a==b)
    {
        return a ;
    }
    else
    checkgcd(b, (a%b)) ;
}
int main()
{
    cout<<"no of test cases"<<endl;
    int t ;
    cin >> t ;
    int n ;

    while(t)
    {
//        int n ;

        cout<<"no of elemets in array"<<endl;
        cin>>n  ;
        int array[n];
        cout<<"enter array elements : "<<endl ;
        for(int i=0;i<n;i++)
        {
            cin>>array[i];
//            cout<<array[i]<<endl;

        }
        int *arraynew = sortarray(array,n);

        for(int k=0; k<n ; k++ )
         cout<<arraynew[k]<<endl ;

        for(int i=0;i<n;i++)
        {
            int ans=0,count=0;
            cout<<"ANS : "<<ans<<endl ;
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    ans = checkgcd(arraynew [i],arraynew[j]);
                    cout<<ans<<endl ;
                }
                if(ans==1)
                {
                    count++;
//                   cout<<"YES"<<endl;
                    break;
                }


            }


        if(count>0)
        {
        cout<<"YES"<<endl;
        break;
        }
        else
        {
            cout<<"NO"<<endl;
            break;
        }
        }
        t--;
    }
    return 0 ;
}
