#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp=NULL;
    char ch;
    char str[100];
     fp=fopen("anshika.txt","w+");
     if(fp==NULL)
     {
        printf("file does not exist");
        exit(1);
     }
      fputs("khatri",fp);
      rewind(fp);
     while(!feof(fp))
     {
        ch=fgets(fp, 5, str);
        printf("%c",ch);
     }
        fclose(fp);
}