#include<stdio.h>
int sum(void);
void main()
{
    int s;
    s=sum();
    printf("sum=%d\n",s);
}
   int sum()
{
   int a,b,sum=0;
    printf("Enter the number\n");
    scanf("%d%d\n",&a,&b);
    sum=a+b;
    return (sum);
    printf("hi");  
}


