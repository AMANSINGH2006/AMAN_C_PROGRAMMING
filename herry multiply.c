#include<stdio.h>
int main()
{
    int i=10,n,num;
    printf("enter the number of table you want to print"); 
    scanf("%d",&n);
    for(; i>0; --i)
    {
       num=n*i;
       printf("%d*%d=%d\n",n,i,num);

    }
}