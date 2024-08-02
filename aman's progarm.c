#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    for(i=0; i<21; i++)
    {
        if(i<10)
       {
            continue;
       }
    }
    printf("%d",i);
}