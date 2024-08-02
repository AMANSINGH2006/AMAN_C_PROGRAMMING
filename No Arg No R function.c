#include<stdio.h>
void sum(void);
void sub(void);
void mul(void);
void div(void);
void main()
{
    sum();
    sub();
    mul();
    div();
}
void sum(void)
{
    int a,b,sum=0;
    printf("Aman Singh please Enter the number you want to sum\n");
    scanf("%d\n%d",&a,&b);
    sum=a+b;
    printf("%d\n",sum);
}
void sub(void)
{
     int a,b,sub=0;
    printf("Aman Singh please Enter the number you want to subtract\n");
    scanf("%d\n%d",&a,&b);
    sub=a-b;
    printf("%d\n",sub);
}
void mul(void)
{
    int a,b,mul=0;
    printf("Aman Singh please Enter the number you want to multiply\n");
    scanf("%d%d",&a,&b);
    mul=a*b;
    printf("%d\n",mul);
}
void div(void)
{
    float a,b,div=0;
    printf("Aman Singh Enter the number you want to divide\n");
    scanf("%f%f",&a,&b);
    div=a/b;
    printf("%f\n",div);
}