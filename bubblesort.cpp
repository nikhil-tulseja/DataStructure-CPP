#include<iostream>

using namespace std;
void bubble(char*,int n);
int main(){

    int co=0;
    cout<<"implementing bubble sort on string"<<endl;
    char n[]="PEOPLE";
        for(int j=0;n[j]!='\0';j++)
        {
                cout<<n[j];
            co++;
        }
        cout<<"the end has come to you!! "<<endl;
    char *a;
    a=n;
    cout<<co<<endl;
            //    cout<<*a;
    bubble(a,co);

////    cout<<t;
}

void bubble(char *ptr,int l)
{
    int count=0;
    while(l>0)
    {
        for(int i=0;i<l-1;i++)
     {

     if(*(ptr+i)>*(ptr+i+1))
        {
            char temp;
            temp=*(ptr+i+1);
            *(ptr+i+1)=*(ptr+i);
            *(ptr+i)=temp;
            count++;
        }
    }
    l--;
    }
    cout<<"total exchanges : "<<count<<endl;
    while(*(ptr)!='\0')
    {
        cout<<*ptr;
        ptr++;
    }
    cout<<endl;
    cout<<"fuck"<<endl;
}
