#include<stdio.h>
void main()
{
    int a,i,num;
    printf("enter the table number");
    scanf("%d",&a);
    for(i=1; i<=10; i++)
    {
        num=a*i;
        printf("%d*%d=%d\n",a,i,num);
    }

}