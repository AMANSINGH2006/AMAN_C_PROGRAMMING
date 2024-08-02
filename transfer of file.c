#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fptr1=NULL,*fptr2=NULL;
    char ch;
   fptr1=fopen("anshika.txt","r");
if(fptr1==NULL)
  {
    printf("file can't exist");
    exit(1);
  }
   fptr2=fopen("Destination.txt","w");
   if(fptr2==NULL)
 {
    printf("file can't exist");
    exit(1);
 }
 while((ch=fgetc(fptr1))!=EOF)
 {
   fputc(ch,fptr2);
 }
   fclose(fptr1);
   fclose(fptr2);
   printf("Successfully copied");
}