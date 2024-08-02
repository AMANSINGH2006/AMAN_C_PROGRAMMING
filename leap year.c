#include<stdio.h>
main()
{
    int year;
    printf("Enter the year");
    scanf("%d",&year);
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
                printf("leap year");
                else
                printf("not leap year");  
        }
    }
    printf("not leap year");
}