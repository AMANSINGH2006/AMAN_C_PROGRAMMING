#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp=NULL;
    char ch;
    char str[100];
     fp=fopen("anshika.txt","r");
     if(fp==NULL)
     {
        printf("file does not exist");
        exit(1);
     }
   while(!feof(fp))
   {
    ch=fgetc(fp);
    printf("%c",ch);
   }
   fclose(fp);
}