#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std ;
void nge(string str)
    {
//    cout<<str<<endl ;
//    cout<<(str.length())<<endl;
//    cout<<str[0]<<endl;


    //str[0]=str[0]+1 ;
    //cout<<str<<endl;
    int n = str.length()-1;
    cout<<n<<endl ;
    int i=0 ;
    while(i<=n)
        {
            cout<<"i ki value :"<< i <<endl;

            cout<<" fir number : "<< str[i]<<endl;
            if(str[i]>str[i+1])
            {
                while((i+1)<=n)
                 {
                     cout<<"i : "<<str[i]<<endl;
                     cout<<"i+1 : "<<str[i+1]<<endl;
                     str[i+1]=str[i]+1;
                     i++;
                 }
                 break;
            }
            if(str[i]+1-48 >=9 && i != n)
            {
                cout<<" yaha greater ho gya bhai "<<endl ;
                int j=1;
                while(j<=n+2)
                {
                    cout<<j ;
                    j++ ;
                }
                break ;
            }
            if(str[i] == str[i+1])
             {
                 cout<<"string "<<str[i]<<" jo same hai :"<<endl ;
                 while((i+1)<=n)
                 {
                     cout<<"i : "<< str[i] <<endl ;
                     cout<<"i+1 : "<< str[i+1] <<endl ;
                        str[i+1]=str[i]+1;
                     i++;
                 }
                 break ;
             }

            i++ ;
        }
        cout<<"n ki value "<<n<<endl ;
        i--;
        cout<<" i ki value "<<i <<endl ;
        if(i==n)
        {
            //cout<<str[i]<<endl;
           // cout<<"last tak pahunch gya be "<<endl ;
            str[i]=str[i]+1;
            if(str[i]==str[i-1])
                str[i]=str[i]+1 ;
            //cout<<str[i]<<endl;

        }
        cout<<str<<endl;
    }
    //cout<<str<<endl;



int main()
{
    string str ;
    cout<<"enter Number : "<<endl;
    cin>>str ;
    nge(str);

}
