#include<stdio.h>
void swap(int*,int*);
void main()
{
    int x=10,y=20;
    printf("Before calling function\n");
    printf("x=%d,y=%d\n",x,y);
    swap(&x,&y);
    printf("after modification in called function\n");
    printf("x=%d,y=%d\n",x,y); 
}
void swap(int* x, int* y)
{
    int swap=0;
    swap=*x;
    *x=*y;
    *y=swap;
    // printf("Inside function called\n");
    // printf("x=%d, y=%d\n",*x,*y);
}