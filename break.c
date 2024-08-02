#include<stdio.h>
#include<conio.h>
void main()
{
   int i,a,sum=0;
   for( i=0;i<=5;i++)
   {
    printf("enter the number");
    scanf("%d",&a);
    if(a<0)
    {
        break;
    }
    sum=sum+a;
   } 
   printf("%d",sum);
   getch();
}