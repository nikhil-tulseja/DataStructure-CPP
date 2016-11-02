#include<conio.h>
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int  *recf(int *q,int);
int main()
{
    int a,c;
    int k[]={76,3,7,6,2,89};
    int *pte=recf(k,6);
        for(int j=0;j<6;j++)
        {

         cout<<*pte<<endl;
            pte++;
        }
}
    int *recf(int *p,int sp)
    {

        if(sp==0)
        return p;
        else
         for(int i=0;i<sp;i++)
        {
            if((*(p+i))>(*(p+i+1)))
            {
                int min=*(p+i);
//                cout<<"min is greater than "<<b[i]<<endl;
                *(p+i)=*(p+i+1);
                *(p+i+1)=min;
            }
        }
//        swap(b,sp,min);
            sp=sp-1;
        recf(p,sp);
     //   return p;
    }
//void swap(int k[],int i,int j)
//{
//    int temp=k[i];
//    k[i]=k[j];
//    k[j]=temp;
//
//    cout<<k[j]<<endl;
//}
