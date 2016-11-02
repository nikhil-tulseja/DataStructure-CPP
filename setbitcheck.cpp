#include<iostream>

using namespace std ;


bool iskbitset(unsigned int n , int k )
{
    return (n&(1<<(k-1)))?true :false ;
}
int main ()
{
    int r,l=1 ;
     cout<<"enter num"<<endl;
     int num,count=0;
     cin>>num;
     r=sizeof(unsigned int)*8;
     while(l<r)
     {
         if(iskbitset(num,l))
         {
             break;

         }

         count++;

         l++;

     }
     cout<<"set bit from right is located at "<<(count+1)<<"position"<<endl;

}
