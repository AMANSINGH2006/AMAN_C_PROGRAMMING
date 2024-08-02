#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,num;
    printf("enter the number");
    scanf("%d",&a);
    for(i=10; i>=1; i--)
    {
       num=i*a;
       printf("%d*%d=%d\n",a,i,num);
    }
}