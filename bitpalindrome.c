#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;


bool iskbitset(unsigned int n,int k)
{
    return (n&(1<<(k-1)))? true : false;

}

int main()
{
    int l=1,r;
    unsigned int num;
    cout<<"enter num"<<endl;

    cin>>num;
    r=sizeof(unsigned int)*8;
    while(l<r)    {
        if(iskbitset(num,l)!= iskbitset(num,r))
        {
            cout<<"not palindrome "<<endl;
            break;
        }
            l++;
            r--;
    }
      if(l>=r)
      {

          cout<<"palindrome"<<endl;
      }
      return 0;
}

