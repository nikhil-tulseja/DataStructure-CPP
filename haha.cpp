#include<conio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{

    int i=0,j,k,temp=10;

    cout<<"pattern chakoo"<<endl;
     for(i=0;i<temp;i++)
     {
         cout<<"     "<<endl;
         cout<<"   ";
         int count=0;
         for(j=0;j<(temp-i);j++)
         {
             cout<<" ";
                count++;


         }
         for(k=0;k<(temp-count);k++)
        {
            cout<<"* ";
        }

     }
return 0 ;
}
