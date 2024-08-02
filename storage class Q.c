#include<stdio.h>
#include<stdlib.h>
int fun()
{
    static int num=16;
    return num--;
}
int main()
{
    for(fun(); fun(); fun())
    {
        printf("%d\n",fun());
        return 0;
    }
}