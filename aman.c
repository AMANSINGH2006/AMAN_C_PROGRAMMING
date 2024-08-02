#include<stdio.h>
#include<conio.h>
void main()
/*demonstration of nested loops */
{
    int i,a,num;
    printf("enter the number");
    scanf("%d",&num);
    for(i=1; i<=10; i++)
    {
        a=num*i;
        printf("%d\n",a);
    }
}