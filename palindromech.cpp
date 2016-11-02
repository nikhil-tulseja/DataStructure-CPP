#include<iostream>
#include<string.h>

using namespace std ;
int isPalindrome(string a)
{
    int store = -1 ;
    int len = a.length() ;
    for(int i=0 ; i<=(len/2);i++)
    {
        if(a[i]!=a[len-i-1])
         {
             if(a[i]==a[len-i-2] && i!=(len-i-2))
             {
                 store=(len-i-1);
                 cout<<"i:  "<<i<<endl;
                 cout<<"last didnt match ?? "<<endl ;
                 break ;
             }
             if(a[i+1]==a[len-i-1] && (i+1)!=(len-i-1))
             {
                 store=i ;
                 cout<<"i:  "<<i<<endl;
                 cout<<"first didnt match "<<endl ;
                 break ;
            }
        }

    }
    return store ;

}
int main()
{
    int t ;
    cin>>t ;
    while(t)
    {
        string a ;
        //cin>>n ;
        cin>>a ;
        int ans = isPalindrome(a);
        cout<<ans<<endl ;
        t-- ;
    }

}
