#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std  ;
int main()
{
    string str ;
    cin>>str ;
    vector<char> v ;
    for(int i = 0 ; str[i] != '\0' ; i++  )
    {
        v.push_back(str[i]) ;

    }
    std::vector<char>::iterator it ;
    for(it = v.begin() ; it != v.end() ; it++)
    {
        if(*it == " ")
        {
            cout<<"Space Detected" << endl ;
        }
    }

    return 0 ;
}
