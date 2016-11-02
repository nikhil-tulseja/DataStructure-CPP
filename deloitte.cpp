#include<conio.h>
#include<iostream>

using namespace std;
int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%2==0 && i%3==0)
        {
            cout<<"RED BALLON"<<" "<<i<<endl;
        }
        else if(i%2==0)
        {
            cout<<"RED"<<" "<<i<<endl;
        }
       else if(i%3==0)
        {
           cout<<"BALLON"<<" "<<i<<endl;
        }

        if(i%2!=0 && i%3!=0)
        {
            cout<<"number "<< i<<endl;
        }
    }
    return 0;
}
