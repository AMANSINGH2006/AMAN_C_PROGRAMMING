#include<stdio.h>
// funtion declaration
char fun();
// funtion calling
void main()
{
    char ch;
   ch=fun();
   printf("ch=%c",ch);
}
//funtion defining
char fun()
{
    char c;
    printf("Enter the character\n");
    scanf("%c",&c);
   return c;
}
