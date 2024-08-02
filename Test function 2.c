#include<stdio.h>
int power(int,int);
 void main()
{
    int a,b,c=0;
    printf("Enter the value of a and b\n");
    scanf("%d\n%d",&a,&b);
    c=power(a,b);
    printf("power is: %d",c);
}
int power(int a,int b)
{
    int c=0;
    c=pow(a,b);
     return (c);
}
