#include<conio.h>
#include<string.h>
#include<iostream>
//#include<stdio.h>
using namespace std;
int main()
{
    int size,opt;
    int x[25],i;
                int *left,*right;
                cout<<"SIZE ? : "<<endl;
                cin>>size;
                    for(i=0;i<size;i++)
                    {
                        cin>>x[i];

                    }
//                int i,*ptr;
//                ptr=*n;
//                for(i=0;i<=11;i++)
//                cout<<*(ptr+i)<<endl;

//                cout<<*n<<endl;
                    left=x;
                    right=x;
                    cout<<"OPTION."<<endl;
                    cout<<"1.insert left. 2. ins right. 3.del left 4. del r";
                    cout<<endl;
                    cin>>opt;


                switch(opt)
                {
                    case 1:
                            {
                                        int k,m;
                                        cin>>k;
                                for(m=size;m>0;m--)
                                    {
//                                        cout<<*(left+m)<<endl;
//                                        cout<<*(left+m+1)<<endl;
                                        int t;
                                            *(left+m)=*(left+m-1);

                                }
                                    *(left+0)=k;
                                    size=size+1;
                                    for(m=0;m<size;m++)
                                    cout<<*(left+m)<<endl;
                                break;
                            }

                    case 2: {
                                    int k,l;
                                    cin>>k;
                                    while(*right)
                                    {
                                        right++;
                                    }
//                                   for(l=0;l<)
//
                                    *right=145;
                                    right=x;
                                    size++;
                                    for(l=0;l<size;l++)
                                    cout<<*(right+l)<<endl;
                                        break;

                            }
                            case 3:
                            {
                                for(int l=0;l<size;l++)
                                {
                                    *(left+l)=*(left+l+1);

                                }
                                size=size-1;
                                for(int l=0;l<size;l++)
                                cout<<*(left+l)<<endl;
                            break;
                            }
                            case 4:
                            {
                                while(*right)
                                {
                                    right++;
                                }
                                right=right-2;
                                right=x;
                                size--;
                                for(int y=0;y<size;y++)
                                cout<<*(right+y)<<endl;
                            }

                }

                 return 0;   }
