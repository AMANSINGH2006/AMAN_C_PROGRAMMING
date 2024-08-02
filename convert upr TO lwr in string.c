#include<stdio.h>
#include<string.h>
void main()
{
    char s1[30];
    int i;
    printf("Enter string s1:");
    gets(s1);
    for(i=0; s1[i]!='\0'; i++)
    {
      if(s1[i]>='A' && s1[i]<='Z')
      {
        s1[i]=s1[i]+32;
      }
    }
    puts(s1);
}