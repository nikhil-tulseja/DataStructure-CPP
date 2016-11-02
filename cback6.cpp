#include<conio.h>
#include<iostream>
#include<stdio.h>
#include<Math.h>
using namespace std;

int main()
{
//    cout<<"enter num"<<endl;
    int num,i,j,k,l,second,count;    //i,j,k, stores temporary dta for every step of loop
//    cin>>num;

    for(num=1;num<=500;num++)
    {
        cout<<"checking "<< num <<endl;;
        int third=num;
        count=0;
        while(third>0)
            {
                cout<<"hello"<<endl;
                third=third/10;
                    count++;

            }
            cout<<"total digits are"<<count<<endl;

        j=0;

        for(second=num;second>0;)
        {
//            cout<<"value of second"<<second<<endl;

//            int count=0;

            i=(second)%10;
            j=j+pow(i,count);
            (second)=(second)/10;


        }
        cout<<"calculated value" << j;

        if(j==num)
        {
            k=num;
            cout<< num <<" is an armstrong num"<<endl;
        }
        else
        cout<<"phut le "<<endl;
    }
    cout<<k <<"is am armstrong number"<<endl;
     return 0;
}
