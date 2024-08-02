#include<stdio.h>
#include<string.h>
int main()
{
    char aman[30],anshika[15];
    printf("Enter name 1st:");
    gets(aman);
    printf("Enter 2nd name:");
    gets(anshika);
    strcat(aman,anshika);
    puts(aman);
    }