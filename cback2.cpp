#include<conio.h>
#include<iostream>
#include<Math.h>
using namespace std;

int main()
{
    int a,b,rad,xcord,ycord,d;

    cout<<"enter the coords of Center"<<endl;
    cin>>a>>b;

    cout<<"enter radius"<<endl;
    cin>>rad;

    cout<<"equation of circle: "<<endl;
    cout<<"(x-"<<a<<")^2 +  (x-"<<b<<")^2 - "<<rad*rad<<endl;
    cout<<"enter point;s coords"<<endl;
    cin>>xcord>>ycord;

    d=pow((xcord-a),2)+pow((ycord-b),2)-(rad*rad);

    if(d>0)
    cout<<"point outside circle"<<endl;
    else if(d<0)
    cout<<"point inside circle"<<endl;
    else
    cout<<"point lies on circle"<<endl;




    return 0;
}
