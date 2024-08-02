#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum=0,c,r;
    printf("enter the number");
    scanf("%d",&n);
    c=n;
    while(n>0){
        r=n%10;
        sum=r+(sum*10);
        n=n/10;}
        if(c==sum)
        printf("pallendrom");
        else
        printf("not pallendrom");
}