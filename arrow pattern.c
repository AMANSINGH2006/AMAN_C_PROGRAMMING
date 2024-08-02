#include<stdio.h>
void main()
{
    int n=15;
    int i,j;
    int x=n/2+1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i==n/2+1) || (j<=x && j>n/2))
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        if(i<=n/2)
        x++;
        else
        x--;
    }
}