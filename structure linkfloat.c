#include<stdio.h>
void main()
{
    struct book
    {
        char name;
        float price;
        int pages;
    };
    struct book b[10];
    int i;
    for(i=1;i<=10;i++)
    { 
        printf("Enter the name, price and pages of book\n");
        scanf("%s%f%d",b[i].name,&b[i].price,&b[i].pages);
    }
     for(i=1;i<=10;i++)
     {
        printf("%s\t%f\t%d",b[i].name,b[i].price,b[i].pages);
     }
}
linkfloat()
{
    float a=0,*b;
    b=&a;
    a=*b;
}
