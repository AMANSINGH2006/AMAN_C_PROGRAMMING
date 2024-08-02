#include<stdio.h>
int incr(int i)
{
    static int count=0;
    count=count+1;
    return count;
}
 main()
{
    int i,j;
    for(i=0; i<=4; i++)
    j=incr(i);
    printf("j=%d\n",j);
}