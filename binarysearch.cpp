#include<iostream>

using namespace std;
void binary(int *q,int j);
int main()
{
    int b;
    cout<<"enter array elements !! "<<endl;
    int a[10];
    for(int i=0;i<=10;i++)
    {
        cin>>a[i];

    }
    binary(a,11);

}

void binary(int *q,int j)
{
    int beg,mid,end,num,loc;
    beg=0;end=11;
    mid=(beg+end)/2;
    cout<<"enter element you want to search !! "<<endl;
    cin>>num;
    cout<<"beg: "<<beg<<"mid: "<<mid<<"end : "<<end<<endl;
    int c=0;
    while( beg<end && *(q+mid)!=num)
    {
        mid=(beg+end)/2;
        if(*(q+mid)>num)
        {
            end=mid-1;

        }
        else{
            beg=mid+1;
        }
    }
    if(*(q+mid)==num)
    {
        loc=mid;

    }
    else
    {
        cout<<"element not found!! "<<endl;
    }
    cout<<"loc is :"<<loc <<endl;


}
