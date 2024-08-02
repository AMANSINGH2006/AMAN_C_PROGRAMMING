#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp;
    char str[50];
    int a;
    float b;
    fp=fopen("anshika.txt","w");
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    printf("Enter the string :");
    gets(str);
    printf("Enter the integer value\n");
    scanf("%d\n",&a);
    printf("enter the float value");
    scanf("%f",&b);
    fprintf(fp, "%d %f %s",a,b,str);
    // for(i=0; i !=strlen(str); i++)
    // {
    //   fputc(str[i],fp);
    // }
    fclose(fp);
}