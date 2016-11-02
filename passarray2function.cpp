#include<conio.h>
#include<iostream>
#include<stdlib.h>
   int j=0;
using namespace std;
int *even(int *p);
//int k=0;
int main(){
    int b;
    int a[10];
    int *ptr;
//    cout<<"enter array"<<endl;
    cout<<"enter array elements"<<endl;
    for(b=0;b<10;b++)
    cin>>a[b];
//    ptr=&a[0];
    ptr=even(a);

    while(j>0)
    {
        cout<<*ptr<<endl;
        ptr++;
        j--;
    }


return 0;
}

int *even(int *p)
{

    static int e[10];

            while(*p)
            {
                if((*p)%2==0)
                e[j++]=(*p);
                p++;
            }
            j--;
            return e;


}
