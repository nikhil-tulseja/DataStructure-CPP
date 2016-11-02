#include<iostream>

#include<conio.h>

using namespace std;

int main()
{
    int i,j,min;
    int a[10];
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<10;i++)
    {   min=a[i];
        j=i-1;
        while(j>=0 && a[j]> min)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=min;

    }
    cout<<"final array would be : "<<endl;
     for(i=0;i<10;i++)
    {
        cout<<a[i]<<endl;
    }

}
