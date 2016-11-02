#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int i,j,k,l,m,p,count=0;
    cout<<"pattern generation"<<endl;
    m=65;l=71,p=71;
    for(k=m;k<=p;k++){
        //k=65
//        cout<<"l : "<<l<<endl;
//        cout<<"k : "<<k<<endl;
    for( i=m;i<=l;i++) //i=65 l=71 prnt upto g
    {
        cout<<(char)i<<" ";
    }
//    cout<<count;
     switch(count)
     {
         case 0:
         break;
         case 1:
         {cout<<"   "; break;
         }
         case 2:

        {   //   cout<<"hello";
          cout<<"       ";
            break;
}


         case 3:
         {cout<<"           "; break;
}
         case 4:
         {cout<<"               "; break;}
         case 5:
         {cout<<"                   "; break;}
         case 6:
         {cout<<"                       "; break;}
         case 7:
         {cout<<"             "; break;}
         case 8:
         {cout<<"               "; }
break;     }


    for(j=l;j>=m;j--)     //j=71 k=65 print upto A
    {


        if(j==71)
        cout<<" ";
        else
        cout<<(char)j<<" ";
    }

    cout<<endl;

    l--;
//    cout<<"k :"<<k<<" "<<"l :"<<l<<" "<<"m :"<<m<<" "<<"i :"<<i<<" "<<"j :"<<j<<endl;
    count++;
//    cout<<count<<endl;
//    cout<<"L"<<l;
    }
    return 0;
}
