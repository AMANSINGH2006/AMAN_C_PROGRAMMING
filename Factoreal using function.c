//we are using "function with argument and with return type"
#include<stdio.h>
int fact(int);
void main()
{
    int a,s;
    printf("Enter the number\n");
    scanf("%d",&a);
    s=fact(a);
    printf(" factoreal of number is: %d ",s);
}
int fact(int n)
{
   unsigned long long int fact=1;
   int i;
    for(i=1; i<=n; i++)
    {
       fact=fact*i;
    }
    return (fact);
}


