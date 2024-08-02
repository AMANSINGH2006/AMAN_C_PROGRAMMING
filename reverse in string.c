#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,l,c;
    char s1[30];
    printf("Enter the string :");
    gets(s1);
    l=strlen(s1);
    while (i<=l/2)
    {
       c=s1[i];
       s1[i]=s1[l-1-i];
       s1[l-1-i]=c;
       i++;
    }
    printf("%s",s1);   
}