#include<iostream>
#include<conio.h>

using namespace std;

int main(){
int count=0;
long int a,b,c,d=0;
cout<<"enter 5 digit num"<<endl;
cin>>a;
b=0;
for(;a>0;a=a/10)
{
    b=(a%10);
    count++;
    d=d+b;
}
cout<<"sum of digits : "<<d;
cout<<"total digits are"<<count;
return 0;
}

