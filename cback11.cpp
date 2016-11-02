#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
//    int i,j,n;
//    cout<<"generating patterns : "<<endl;
//    cout<<"enter n : "<<endl;
//    cin>>n;
//    space=(n/2)+1;
int i,j,k;
  k=1;
  for(i=1;i<=5;i+=1)
  {
    for(j=6;j>=1;j--)
    {
        if(j==1)
        cout<<" ";
      if(j>=i)
        cout<<" ";
        else
        cout<<k++<<"  ";



    }
    cout<<endl;
  }

    return 0;
}
