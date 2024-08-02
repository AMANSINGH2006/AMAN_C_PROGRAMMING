#include<stdio.h>
int r()
{
    static int num=7;
    return(num--);
}
int main()
{
    int i,j;
    for(r(); r(); r())
    printf("%d\n",r());
    return 0;
}