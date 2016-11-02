#include<conio.h>
//#include<stdio.h>>
#include<iostream>
using namespace std;

int main()
{
    int i,j,cyr,gyr,m,k;
    cout<<"Monday on 01/01/01. "<<endl;
    gyr=2001;
    cout<<"enter the current year"<<endl;
    cin>>cyr;

    int count=0;


    j=cyr-gyr;
    for(i=gyr;i<cyr;i++)
    {
        if(i%4==0)
        {
            count++;

        }
    }
    cout<<"leap years between given interval : "<<count<<endl;
      if(j>=7)
      {
          k=j/7;
          m=j%7;
      }
      else
      {

        m=j;
      }

    switch((m+count)%7)
    {

     case 0 :
            {
            cout<<"monday"<<endl;
            break;
            }
     case 1 :
            {
            cout<<"Tuesday"<<endl;
            break;
            }
     case 2:
            {
            cout<<"Wednesday"<<endl;
            break;
            }
        case 3:
            {
            cout<<"Thursday"<<endl;
            break;
            }
        case 4:
            {
           cout<<"Friday"<<endl;
            break;
            }
        case 5:
            {
            cout<<"Saturday"<<endl;
            break;
            }
        case 6:
            {
            cout<<"sunday"<<endl;
            break;
            }


    }

return 0;
}
