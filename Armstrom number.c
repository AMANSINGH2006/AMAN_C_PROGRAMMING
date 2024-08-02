#include<stdio.h>
void main()
{
    int n,x,sum=0,s,c=0,i=1;
    printf("enter the number range");
    scanf("%d",&n);
    for(; i<=n; i++)
    { x=i;
    while(i>0)
    {
        s=i%10;
        sum=sum+(s*s*s);
        i=i/10;
    }
        if(x==sum)
       c+=1;
        printf("%d",i);
    }
}      