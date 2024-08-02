#include<stdio.h>
int main()
{
    printf("date=%s\n",__DATE__);
    printf("time=%s\n",__TIME__);
    printf("file=%s\n",__FILE__);
    printf("line=%d\n",__LINE__);
    printf("standard=%d\n",__STDC__);
    return 0;
}