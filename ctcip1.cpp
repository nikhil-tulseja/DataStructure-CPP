#include<iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std ;
//bool checkUnique(string str )
//{
//    const char *ptr = str.c_str() ;
//    map<char,int> mymap ;
//    int len = strlen(ptr);
//    for(int i = 0 ; i < len ; i++)
//    {
//        if(mymap.find(ptr[i]) != mymap.end())
//            {
////             cout<< " uniqueness ni hai"<<endl ;
//             return false ;
//            }
//        else
//            {
////            cout<<ptr[i]<<" ";
//            mymap[ptr[i]] = i ;
//            }
//
//    }
//    return true ;
//
//}

//when use of any other data structure is not allowed .

//bool merge(char *a , int l , int mid, int r)
//{
//    bool found_equal ;
//    int i = l ;
//    int j = mid+1 ;
//    int k = l ;
//    while(i<= mid && j <= r)
//    {
//        if(a[i] > a[j])
//        {
//            a[k++] = a[j] ;
//            j++ ;
//        }
//        else if(a[i] < a[j])
//        {
//            a[k++] = a[i] ;
//        }
//        else
//        {
//            found_equal = true ;
//            break ;
//        }
//
//    }
//    if(found_equal)
//        return false ;
//    while(i <= mid)
//    {
//        a[k++] = a[i] ;
//        i++ ;
//    }
//    while(j <= r)
//    {
//        a[k++] = a[j] ;
//        j++ ;
//    }
//   return true ;
//}
//int mergesort(char *a , int l , int r,int &n )
//{
////    int n = 1 ;
//    if(r>l && a)
//    {
//        int mid = (l+r)/2;
//        n = mergesort(a,l,mid,n) ;
//        n = mergesort(a,mid+1,r,n) ;
//        bool flag = merge(a,l,mid,r) ;
//        if(!flag)
//        {
//            return 0 ;
//        }
//        else
//            return 1 ;
//    }
//
//}
//one constraint we follwed is :- only choti abcd is there
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std  ;
bool bookSolution(const char *a ,int len)
{
    int checker = 0 ;
    for(int i=0 ; i < len ; i++)
    {
        int digit = a[i]-'a';
        cout<<digit<<endl ;
        if(( checker & (1<<digit) ) > 0 )
            return false ;

        checker |= (1<<digit) ;

    }
    return true ;

}
int main()
{
     std::string str;
     cin>>str;
    //     bool hello = checkUnique(str) ;
     const char *ptr = str.c_str() ;
     int len = strlen(ptr);
//     int a = 1 ;
//     int hello  = mergesort(ptr,0,len,a) ;
     bool hello = bookSolution(ptr,len) ;
     if(!hello)
     cout<<"all characters are not unique"<<endl ;
     else
     cout<<"unique"<<endl ;
     return 0 ;
}
