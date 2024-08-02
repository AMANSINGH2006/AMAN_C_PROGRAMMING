#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp=NULL;
    char ch;
  fp=fopen("anshika.txt","r");
  if(fp==NULL)
  {
    printf("file can't exist");
    exit(1);
  }
fseek(fp,6,SEEK_SET);//used to set the curser from begining to 6(offset(it is changing acording to your requirment)) bytes
ch=fgetc(fp);
printf("%c",ch);

fseek(fp,-3,SEEK_CUR);  //used to set the curser from current position to -3(offset) bytes    
ch=fgetc(fp);
printf("\n%c",ch);

fseek(fp,-4,SEEK_END);  //used to set the curser from END to -4(offset) bytes 
ch=fgetc(fp);
printf("\n%c",ch);  //fputc(ch,fp);
fclose(fp);
}