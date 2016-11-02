#include<iostream>
#include<conio.h>
#include<Math.h>

using namespace std;
void reverse(char a[],int number){
    int j=0,len=number-1,temp;
    while(j<len){
    temp=a[j];
    a[j]=a[len];
    a[len]=temp;

    j++;len++;
    }
}

int intTostr(int n,char *a,int af)
{
    int i=0;
    while(n)
    {

        a[i++]=n%10+'0';
        n=n/10;
    }
    // if after point is greater than the given numbers.
    while(i<af)
    {
        a[i++]='0';

    }
    reverse(a,i);
    a[i]='/0';

    return i;
}
int ftoa(float num, char *res,int afterpoint ){
    int ipart=(int)num;
    float fpart=num-(float)ipart;
    int m=intToStr(ipart,res,0);

    if(afterpoint!=0)
    {
    res[m]='.';
    fpart = fpart * pow(10, afterpoint);

    intTostr((int)fpart,res+i+1,afterpoint);
    }
}
int main()
{
    float num;
    char a[10];
    cout<<"enter float to be converted"<<endl;
    cin>>num;

    ftoa(num,a,2);
    return 0;
}
