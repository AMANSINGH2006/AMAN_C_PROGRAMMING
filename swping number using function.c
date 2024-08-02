#include<stdio.h>
void swap(int,int);
void main()
{
  int x=10;
  int y=20;
 // int temp=0;
  swap(x,y);
  printf("function calling\n");
  printf("x=%d, y=%d\n",x,y);  
}
void swap(int x,int y)
{
   int temp=0;
   temp=x;
   x=y;
   y=temp;
   printf("function called or definition\n");
   printf("x=%d, y=%d\n",x,y);
}