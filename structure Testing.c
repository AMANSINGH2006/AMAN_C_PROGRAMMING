#include<stdio.h>
struct student       // Tag or name of structure 
{
  //All these are members of structure 
  int roll_no;
  float marks;
  char name[20];
};
void main()
{
  int a;
  struct student s,s1; 
  printf("%d",sizeof(s));
}