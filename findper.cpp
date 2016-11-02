#include<iostream>
#include<string>
#include<stdio.h>
#include<list>

using namespace std ;

int findper(string str1, string str2 )
{
    //string str1,str2 ;
    //std::getline(cin, str1);
    //std::getline(cin, str2);
    list<string> str1List = new list<string>(str1.split(' '));
    list<string> str2List = new list<string>(str2.split(' '));
    int count=0;
        foreach (string word in str1List)
        {
            // if we want some words to reject  like "sum" , "IS" as discussed on phone
            // we can also apply a new check for that here.
            if (str2List.Contains(word))
            {
                 count++;
            }
        }
   //find length for both list templates after splitting .
   //compare length
   // store the smaller one.
   int finallength ; //smaller one.
   int percentage = (count/finallength)*100 ;

   return percentage ;
}
