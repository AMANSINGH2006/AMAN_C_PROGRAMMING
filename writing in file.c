#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    int i;
    char ch[50]="Anshika Aman singh";
    fp=fopen("anshika.txt","w");
if(fp==NULL)
{
    exit(1);
}
//fputs(ch,fp);
for(i=0; i!=strlen(ch); i++){
    fputc(ch[i],fp);
}
    fclose(fp);
}