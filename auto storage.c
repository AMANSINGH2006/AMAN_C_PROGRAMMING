#include<stdio.h>
#include<stdlib.h>
int main()
{
    auto int x=10;
    {
        auto int x=20;
        printf("x=%d\n",x);
    }
    printf("x=%d",x);
    return 0;
}