#include<stdio.h>
#include<string.h>
void main()
{
    char aman[30];
   unsigned int count;
    printf("Enter the string name:");
    gets(aman);
    count=strlen(aman);
    printf("length of string is %d",count);
}