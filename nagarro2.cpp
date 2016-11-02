#include<iostream>
#include<conio.h>

using namespace std ;

void zeroatodd(int input[],int length)
{
    int i=0,countzero=0,countone=0;//,var=0;
    while(i<length)
    {
        if(input[i]==0 )
        {
            countzero++;
        }
        else
           countone++;
        i++;
    }
    i=0;
//    if(countone<countzero)
//             var=countone;
//        else
//           var=countzero;
    int v=0,var=0;
    while(i<length)
    {

        if(i%2==0 && var <countzero)
        {
            input[i]=0;
            var++;
        }
        else if(i%2==1 && v<countone)
        {
            input[i]=1;
            v++;
        }
           i++;

    }

    //return count;
}
int main()
{
    int a[]={0,0,1,1,1,1,1,1,1,1,1,1,1,1};
    int j=0;
    zeroatodd(a,14);
//    cout<<k<<endl;
        while(j<14)
        {
            cout<<a[j]<<" ";
            j++;
        }
}
