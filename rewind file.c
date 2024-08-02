#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp=NULL;
    char ch;
    int position;
    char str[50];
  fp=fopen("anshika.txt","r");
  if(fp==NULL)
  {
    printf("file can't exist");
    exit(1);
  }
  fseek(fp,6,str);
  while(!feof(fp))
  {
    ch=fgetc(fp);
    printf("%c",ch);
  }
  printf("\n");
  
  rewind(fp);
  while(!feof(fp))
  {
    ch=fgetc(fp);
    printf("%c",ch);
  }
}
