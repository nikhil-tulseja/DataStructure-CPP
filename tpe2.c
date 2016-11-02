#include<stdio.h>
#include<conio.h>

int main()
{

   int a ;
   char ch;

do
{
    printf("enter a year ");
   scanf("%d",&a);
    if(a%4==0)
   {
   printf("%d  is leap year ", a );
   }
   else
   {
   printf("year is not a leap year ");
   }
    printf("enter y or Y to continue");
    scanf(" %c", &ch); // space before %c is must. !! I mean it . :D :D sach m bht khajjal kiya is space ne.
}while( ch =='y' );

    return 0;
}
