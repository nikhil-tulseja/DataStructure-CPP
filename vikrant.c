#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct student
{
  int a;
  char cga;
  float f;
  struct student *link;

};

int main()
{
    struct student *ptr;
    struct student *x;
//    *x=&ptr;
//    x=ptr;
    ptr++;

     //ptr=(struct student *)malloc(sizeof(struct student));
    //ptr->a=12;
    //ptr1=(struct student *)malloc(sizeof(struct student));
    //ptr1->a=45;
    printf("size %d",ptr);
return 0;
}
