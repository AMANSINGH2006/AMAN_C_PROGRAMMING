#include<stdio.h>
union student
{
    int a;
    float b;
    char name[25];
};
int main()
{
  union student Anshika;
  printf("Enter all the values\n");
  scanf("%d %f %s",&Anshika.a,&Anshika.b,Anshika.name);
  printf("a=%d b=%f name=%c",Anshika.a,Anshika.b,Anshika.name); /*output executed is depend on what is last value*/
}