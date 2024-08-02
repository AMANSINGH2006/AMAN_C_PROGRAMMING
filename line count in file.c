#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp=NULL;
    char ch;
   int n=1;
  fp=fopen("anshika.txt","r");
  if(fp==NULL)
  {
    printf("file can't exist");
    exit(1);
  }
  while((ch=fgetc(fp))!=EOF)
  {
    if(ch=='\n')
    {
        n++;
    }
  }
  fseek(fp,0,SEEK_END);
  printf("%d\n",ftell(fp));

  fclose(fp);
  printf("lines are :%d\n",n);
}