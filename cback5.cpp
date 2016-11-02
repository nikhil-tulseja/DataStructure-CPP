#include<conio.h>
#include<iostream>

using namespace std;

int main()
{

    int num;
    cout<<"enter num"<<endl;

    cin>>num;
    int power;
    cout<<"enter power"<<endl;
    cin>>power;
    long ans=1;
    for(int i=1;i<=power;i++)
    {
        ans=ans*num;


    }
     cout<<ans<<endl;
    //cout<<num;
    return 0;

}
