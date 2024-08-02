#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp;
    char str[100];
  fp=fopen("anshika.txt","a");
  if(fp==NULL)
  {
    exit(1);
  }
  printf("Enter the content you want to append: ");
  gets(str);
 // fputs(str,fp);
 fprintf(fp,"%s\n", str);
  printf("successfully appended");
  fclose(fp);
}
