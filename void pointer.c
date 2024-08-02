#include<stdio.h>
int main()
{
   int a=5;
   float b=1.56;
   char ch='c';
    void* vp;
   vp=&a;
   printf("a=%d\n",*(int*)vp);
   vp=&b;
   printf("b=%f\n",*(float*)vp);
   vp=&ch;
   printf("c=%c",*(char*)vp);
}