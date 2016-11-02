#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std ;
void removerepetitive(char *a )
{

    int len = strlen(a);

    cout<<"length : "<<len<<endl ;
    int count[256]  ;
    memset(count,0,sizeof(count));

    for(int i=0;a[i];i++)
    {
        count[a[i]]++ ;
    }
    int i=0 ;
    while(a[i])
    {
        if(count[a[i]] > 1 )
        {
           a[i]= '\0' ;
        }

         i++ ;

    }

    i=0 ;
    int j=0 ;
    while(i<len)
    {
        if(a[i]!='\0')
        {
            a[j++] = a[i] ;
        }
        else
        {
            free(&a[i]);

        }
    i++ ;
    }
    i=0 ;
    while(i<j)
    {
        cout<<a[i] ;
        i++ ;
    }
}
int main()
{
    char a[]= "helloworld" ;
    removerepetitive(a);
    return 0 ;
}
