#include<stdio.h>
#include<conio.h>
void main()
{
    int i,sum=0,a;
for(i=1; i<=5; i++){
printf("enter the number");
scanf("%d",&a);  
if(a<0)
{
    continue;
}
sum=sum+a;
}
printf("%d",sum);
}