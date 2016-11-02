#include<iostream>

using namespace std;

void swap(char *a, char *b)
{
    char *temp= a;
    a=b;
    b=temp;


}

int main()
{
    cout<<"swap krega ? ? "<<endl;
    char str1[]="geeks";
    char str2[]= "hello world";
   // swap(&str1,&str2);

    cout<<str1<<endl<<str2;

return 0;
}
