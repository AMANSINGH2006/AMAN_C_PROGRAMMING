#include<stdio.h>
int* returnpointer(int[]);
void main()
{
    int* p;
    int a[]={1,2,3,4,5};
    p=returnpointer(a);
    printf("%d",*p);
}
int* returnpointer(int a[])
{
    a=a+2;
    return a;
}