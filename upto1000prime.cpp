#include<iostream>

using namespace std;
int main()
{
    int count,num;
    cout<<"enter num"<<endl;
    cin>>num;
    int a,i=3 ;
    count=0;
    cout<<"prime 2"<<endl;
    for(count=2;count<=num;)
        {for(a=2;a<=i-1;a++)
        {
//            cout<<"a: "<<a<<endl;
            if(i%a==0)
            {
//                    cout<<"i : "<<i <<endl;
                break;
            }
        }
        if(i==a){
            cout<<"Prime"<<a<<endl;
            count++;
                }
            i++;
            }
            cout<<endl<<count<<endl;
}



