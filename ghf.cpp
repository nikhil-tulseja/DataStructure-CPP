#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<Math.h>
using namespace std;

int main()
{
    int a,num,count,temp,rem,ch;
int c=0;
    cout<<"enter the no upto which you want to print armstrong no "<<endl;
    //cin>>num;

    for(count=111;count<=30000;count++)
    {
        a=0;
         ch=0;
        rem=temp=count;
//        cout<<rem<<endl<<temp<<endl<<count;
        while(temp)
        {


            temp=temp/10;
          //  cout<<"temp is :"<<temp;
            a++;
        }
        while(rem)
        {

           //cout<<"rem is "<<rem%10<<endl;
        ch=ch+pow(rem%10,a);

        //cout<<ch;
        rem=rem/10;
        }
        //cout<<"ch is "<<ch<<endl;
        if(ch==count)
        {
            cout<<count<<" is an armstrog number"<<endl;
            c++;
        }
        else{
        cout<<count<<" is not an armstrong no"<<endl;
        }


  }
  cout<<c<<endl;
    return 0;
}

