#include<stdio.h>
#include<iostream>

using namespace std ;

//function to calculate the percentage matched in two strings.
//passing two strings in the form of the answers. In this case we can also have vector<string> for comparing two sheets.
int findpercentage(string a, string b)
{
    int lengthofa = a.length();
    int lengthofb = b.length();
    int count;
    int finallength = ((lengthofa < = lengthofb) ? lengthofa : lengthofb ) ;
    for(int i=0;i<finallength ; i++)
    {
        if(a[i]==b[i])
        {
            count++;
        }
    }
        //get threshold value
        int threshold ;
        cin>>threshold;
        int percentage ;
         if(count > threshold)
         {
            percentage = (count/finallength)*100 ;
         }
         else
         {
             //print minimun characters matched are less than threshold value.

         }



return percentage ;
}

