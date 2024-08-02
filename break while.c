#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i=3,sum=0;
    while(1)
    {
    printf("enter the number");
    scanf("%d",&a);
    if(i<0)
    {
    break;
    }
    sum=sum+a;
    i--;
    }
    printf("%d",sum);
}