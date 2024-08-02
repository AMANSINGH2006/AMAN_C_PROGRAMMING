#include<stdio.h>
int sum(int,int);
void main()
{
    int a,b,c;
    printf("Enter the number\n");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("sum=%d",c);
}
int sum(int x,int y)
{
   //int s=0;
  // s=x+y;
   return (x+y);
  // return (s);
}