#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std ;
void swapwords( char input[], char swap1[],char swap2[])
{
    int i=0,j=0,count=0;
    while(*(input+i))
    {   int temp=i;
        if(*(input+i)== *(swap1+j))
        {
        i++;
        j++;
        count++;
        }
        if(count==strlen(swap1))
        {
            swap(char *(input+i), char *swap2);
        }
//    return input;
}
}
void swap2(char *str1, char *str2)
{
  char *temp = (char *)malloc((strlen(str1) + 1) * sizeof(char));
  strcpy(temp, str1);
  strcpy(str1, str2);
  strcpy(str2, temp);
  free(temp);
}

int main(){

char input[]="one two three four five";
char swap1[]="two";
char swap2[]="fourkgnvjfnnvfjvjfnn dvnjd";
swapwords(input, swap1,swap2);
  cout<<swap1<<endl;
    cout<<swap2<<endl;
}
