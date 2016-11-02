#include<stdio.h>
#include<conio.h>

int main()
{

   int a,b ,c;
   char ch;

 printf("Enter all ages");
 scanf(" %d", &a);
 scanf(" %d", &b);
 scanf(" %d", &c);
((a>b && b>c)? printf("c is smallest") : ((b>a && a>c) ? printf("c is smallest ") : (c>a && a>b) ? printf("b is smallest") : (c>b && b>a) ? printf(" a is sma"): printf("a is smallest")));
    return 0;
}
