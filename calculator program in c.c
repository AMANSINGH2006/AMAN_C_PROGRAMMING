#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,sum,sub,mul,Div;
    char operator;
    printf("enter operator");
    scanf("%c\n",&operator);
    printf("enter two operands");
    scanf("%d\n%d\n",&a,&b);
    switch(operator)
    {
        case '+':
        sum =a+b;
        printf("%d",sum);
        break;
        case'-':
        sub=a-b;
        printf("%d",sub);
        break;
        case'*':
        mul=a*b;
        printf("%d",mul);
        break;
        case'/' :
        Div=a/b;
        printf("%d",Div);
        break;
        default:
        printf("\n enter valid operator");
    }
    getch();
}