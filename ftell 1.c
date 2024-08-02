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
  position=ftell(fp);
  printf("%d\n",position);

 fseek(fp,6,SEEK_SET);//used to set the curser from begining to 6(offset(it is changing acording to your requirment)) bytes
 printf("%d\n",ftell(fp));

 ch=fgetc(fp);         // if you use this then it move our fp to next position
 printf("%c\n",ch);
 printf("%d\n",ftell(fp));

 fscanf(fp,"%s",str);  //it is used for reading string from where your curser stand(it should be anywhere in file)
 printf("%s\n",str);
printf("%d\n",ftell(fp));

fseek(fp,0,SEEK_END);
printf("%d",ftell(fp));
fclose(fp);
}