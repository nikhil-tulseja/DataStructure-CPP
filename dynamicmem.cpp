#include<conio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int a,b;
    int c[10];

    int *ptr;
    cout<<"enter array elements"<<endl;
    for(b=0;b<10;b++)
    cin>>c[b];

    ptr=(int*)malloc(10*sizeof(int));
    ptr=c;
    for(a=2;a<10;a++)
    {
        cout<<*(ptr+a);

    }

return 0 ;
}
