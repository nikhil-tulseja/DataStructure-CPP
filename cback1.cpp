#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
    int x,num;
    int rev=0;
    cout<<"enter num"<<endl;
    cin>>num;

    while(num)
    {
        x=num%10;
        cout<<x<<endl;
        rev=rev*10+x;
        cout<<rev;
        num=num/10;
        cout<<"num "<<num<<endl;
//        cout<<"rev is "<<rev;
    }
    cout<<"reverse is: " <<rev;

    return 0;
}
