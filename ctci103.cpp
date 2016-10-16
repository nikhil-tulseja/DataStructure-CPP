#include<iostream>
using namespace std ;
//#include<
int main()
{
    char a[50] ; int len ;
    cout<<"enter string and length"<<endl ;
    cin>>len ;
    for(int i = 0 ; i <=len ; i++ )
    {
        cin>>noskipws>>a[i];

//        cout<<i<<endl;
    }
    for(int i = 0 ; i <=len ; i++ )
    {
//        cin>>noskipws>>a[i];

     cout<<a[i]<<endl;
    }
    int space_count = 0 ;
    for(int i=0;i<=len;i++)
    {
        if(a[i] == ' ')
        {
            space_count++ ;
        }

    }
    cout<<"Spaces"<<space_count<<endl;
    int new_len = len + space_count*2 ;
    cout<<"New Length "<<new_len<<endl;

    int j = len ;
    for(int it = new_len ; it >= 0 ; it-- )
    {
        if(a[j] == ' ')
        {
            a[it] = '0' ;
            it-- ;
            a[it] = '2' ;
            it-- ;
            a[it] = '%'  ;
        }
        else
        {
            a[it] = a[j]  ;

        }
        j-- ;

    }
    for(int i = 0 ; i <= new_len ; i++)
    {
        cout<<a[i] ;

    }
    return 0 ;
 }
