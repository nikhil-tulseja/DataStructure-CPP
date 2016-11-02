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
    for(i=0;i<10;i++)
    {
        min=a[i];
        j=i+1;
        while(j<10)
        {
            if(a[j]<min)
            {
                int temp=min;
                min=a[j];
                a[j]=temp;

            }
            j++;
        }
        a[i]=min;


    }
cout<<"final array would be : "<<endl;
     for(i=0;i<10;i++)
    {
        cout<<a[i]<<endl;
    }

}

