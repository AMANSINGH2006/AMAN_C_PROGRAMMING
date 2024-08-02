#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,j=3;
    do
    {
        do
        {
            printf("%d\n",--j);
            j--;
        }
        while(j>0);
       // i++;
        printf("%d\n",i++);
       // i++;
    }
    while(i<4);
}