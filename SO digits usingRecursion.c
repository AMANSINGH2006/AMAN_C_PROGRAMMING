#include<stdio.h>
int sum(int x)
{
    int s=0;
    if(x==1)
    {
        return x;
    }
    s=x+sum(x-1);
    return s;
}
void main()
{
    int a,n;
    printf("Enter the number of digits\n");
    scanf("%d",&n);
        a=sum(n);
    printf("a=%d",a);
}