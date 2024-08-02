#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,a=0,b=1,c,j,space;
    printf("enter the number\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
  {
    for(space=1; space<=(n-i); space++)
        {
            printf(" ");
        }
     for(j=1; j<=i; j++)
    {   c=a+b;
        printf("%d  ",a);
        a=b;
        b=c;
     }
     printf("\n");
  }
}