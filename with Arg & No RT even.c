#include<stdio.h>
void even(int);
void main()
{
    int a;
    printf("enter the  number\n");
    scanf("%d",&a);
    even(a);
}
void even(int n)
{
   if(n%2==0)
   {
    printf("Even");
   }
   else
   {
    printf("Not Even");
   }
}