#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    clrscr();
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("%d", (2n+1-2*i));
    }
    getch();
}