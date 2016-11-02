#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std  ;
bool checkIfPalindrome(char *s1 , int l1 , char *s2, int l2)
{
    if(l1 != l2)
        return false ;
//    map <char, int> mymap ;
//    for(int i = 0 ; i< l1 ; i++)
//        mymap[s1[i]] = i ;
//    for(int i = 0 ; i < l2 ; i++)
//    {
//        if(mymap.find(s2[i]) == mymap.end())
//            return false ;
//    }
    int a[256] = {0};
//    for(int i =0 ; i<256 ; i++)
//    {
//        cout<<a[i]<<" ";
//    }
    for(int i = 0 ; i< l1; i++)
    {
        a[s1[i]]++ ;
    }
    for(int i = 0 ; i< l2; i++)
    {
        if(--a[s2[i]] < 0)
            {
                cout<<s2[i]<<" ";
                return false ;
        }
    }

    return true ;
}
int main()
{
    char s1[] =  "naman" ;
    char s2[] =  "namaq" ;
    int l1 = sizeof(s1)/sizeof(s1[0]) ;
    int l2 = sizeof(s2)/sizeof(s2[0]) ;
    bool flag = checkIfPalindrome(s1,l1,s2,l2) ;
    if(flag)
        cout<<"both are permutation of each other"<<endl ;
    else
        cout<<"Hatt"<<endl;
    return 0 ;
}
