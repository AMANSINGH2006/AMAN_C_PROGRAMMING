#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a,n,sum=0;
    printf("enter the number");
    scanf("%d",&a);
    for(i=1; i<=10; i++)
    {
        n=a*i;
        sum=sum+n;
        printf("%d\n",sum);
    }
}