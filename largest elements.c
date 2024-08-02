#include<stdio.h>
void main()
{
    int a[8],i,large;
    printf("Enter the numbers");
    for(i=0;i<8;i++){
    scanf("%d",&a[i]);}
    large=a[0];
    for(i=1;i<8;i++)
    {
    if(a[i]>large)
    large=a[i];
    }
    printf("largest number is: %d",large);
}