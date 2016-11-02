#include<iostream>

using namespace std ;

char *removeoccur(char *str)
{
    int i=0,res=0,j=0;
    while(*(str+j))
    {
        if(*(str+j)!='b')
        {
            (*(str+res))= (*(str+j));
            res++;
            j++;
        }
        else
        j++;

    }
    *(str+res)='\0';
    cout<<str<<endl;
    res=0;
    while(*(str+i))
    {
// if(*(str+i) == 'b')
//        {
//            i++;
//        }
        if((*(str+i) == 'a' )&& (*(str+i+1)=='a'))
        {
            *(str+res)= *(str+i);
            res++;
            i++;
        }
        else {
             if(*(str+i) == 'b')
        {
            i++;
        }
             *(str+res)= *(str+i);
//             i++;
             res++;

         }


         i++;
    }
    *(str+res)='\0';
    return str;

}
int main(){
        char h[]= {"aacbccdbsssaba"};
       char *b = removeoccur(h);
      cout<<b<<endl;




return 0; }
