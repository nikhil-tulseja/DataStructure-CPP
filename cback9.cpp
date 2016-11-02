#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int i=8,j=0,f,count=0;
    float temp=0.0,ans=0.0;
    cout<<"calculate factorial"<<endl;
    do
    {
        f=1;
        i--;
        cout<<"i :"<<i<<endl;

        j=i;
        temp=j;
        cout<<"temp: "<<temp<<endl;
        cout<<"j : "<<j<<endl;
        for(;j>1;j--)
        {


        if(j>1)
        {
            f=f*j;
        }
        }
        cout<<"factorial of "<<j <<"is : "<<f<<endl;
        temp=(temp/f);
        cout<<"temp is : "<<temp<<endl;
        ans=ans+temp;
        count++;
        cout<<"count : "<<count<<endl;
    }while(count!=7);
    cout<<"--------!!------------"<<endl;
    cout<<"here's the fuckin final answer : "<<ans<<endl;
    return 0;
}
