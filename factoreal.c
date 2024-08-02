#include<stdio.h>
 int main()
{
    int i=1,n;
    unsigned long long fact=1;
    printf("enter the number");
    scanf("%d",&n);
    do{
        fact=fact*i;
        i++;
         if(n<0)
       {
        printf("factorial of negative number does not exist");
       }
    }while (i<=n);
        printf("%llu",fact);
    }