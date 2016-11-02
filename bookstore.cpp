#include<conio.h>
#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class book
 {
     char *name[2];
     char temp[10];
     int tempnum;
     char *p;
     int price[2],num[2];
     public:
//    char temp;
     void getvalues();
     void whichbook(){

     cout<<"enter name of book"<<endl;
     scanf("%s",temp);
     }
     void matchstore(){
         int flag=0;
      for(int i=0;i<2;i++)
      {
          if(name[i]==p)
          {
              flag=1;
              cout<<"book is in store!! "<<endl;
              cout<<"Enter number of books you want!! "<<endl;
              cin>>tempnum;
              if(num[i]>=tempnum)
              {
                  cout<<"CONGRATS!!"<<endl;
                    cout<<"PRICE Is : "<<price[i];
              }
              else
              cout<<"fuck off@@ "<<endl;
          }





      }
      if(flag==0)
                cout<<"BOOK IS NOT AVAILABLE!!"<<endl;
     }

 };
 void book :: getvalues(){

        for(int j=0;j<2;j++)
        {
            char n[10];
            cout<<"enter book name"<<endl;
fflush(stdin);
           gets(n);
            int len=strlen(n);
            p=(char*)malloc(len+1);
            strcpy(p,n);

            name[j]=p;
            cout<<endl<<"enter price: "<<endl;
            cin>>price[j];
            cout<<"no of available books : "<<endl;
            cin>>num[j];

        }

 }

 int main(){
    book b1;
        b1.getvalues();
        b1.whichbook();

        b1.matchstore();
        cout<<"happy to see you!!"<<endl;
    return 0;
 }
