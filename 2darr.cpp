#include<conio.h>
#include<string.h>
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int opt;
    char c[2]="A";
//                int *left,*right;
//                cout<<"SIZE ? : "<<endl;
//                cin>>size;
                    for(i=0;i<6;i++)
                    {
                        cin>>x[i];

                    }
//                int i,*ptr;
//                ptr=*n;
//                for(i=0;i<=11;i++)
//                cout<<*(ptr+i)<<endl;

//                cout<<*n<<endl;
//                    left=x;
//                    right=x;
                    cout<<"Position:"<<endl;
                    cout<<"1.insert left. 2. ins right. 3.del left 4. del r";
                    cout<<endl;
                    cin>>opt;
//                    while(*right){
//
//                        right++;
//                                }

                    for(int c=opt-1;c<6;c++ )
                    x[c]=x[c+1];

//                    x[opt-1]=10;

                    for(int p=0;p<5;p++)
                        cout<<x[p];
                 return 0;   }
