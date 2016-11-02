#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
    int x,y,a,x1,y1,x2,y2,x3,y3;
    float m;
        cout<<"enter line coords"<<endl;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;

        m=(float)(x2-x1)/(float)(y2-y1);
        cout<<"slope is  : "<<m;
        cout<<"equation of line is :";
        cout<<" y-"<<y1<<" = "<<m<<"*(x-"<<x1<<")"<<endl;

        cout<<"now put third points in this equation"<<endl;
        if((y3-y1)==(x3-x1)*m)
        cout<<"given points are in one line : ^_^"<<endl;
        return 0;


}
