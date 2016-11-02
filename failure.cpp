#include<conio.h>
#include<iostream>
#include<Math.h>
#include<stdlib.h>

using namespace std;

int main(){
    float a,b;
    int c,d,m,n=0;
    double k;
    cout<<"enter num";
    cin>>a;

    c=(int)a;

    k=a-c;
    cout<<endl<<k;

    k=k*(pow(10,9));
    cout<<k;

    int g=k;
    cout<<endl<<"G: "<<g;
    while(g>0)
    {

        n=n+(g%10);
        g=g/10;
    }
    cout<<"sum: "<<n<<endl;

}
