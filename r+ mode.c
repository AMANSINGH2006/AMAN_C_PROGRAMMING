#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp=NULL;
    char str[100];
     fp=fopen("anshika.txt","r+");
     if(fp==NULL)
     {
        printf("file does not exist");
        exit(1);
     }
     gets(str);
     fputs(str,fp);
     fclose(fp);
}