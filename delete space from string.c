#include<stdio.h>
#include<string.h>
void main()
{
   char a[30];
   int i,l,j;
   printf("Enter string:");
   gets(a);
   l=strlen(a);
   for(i=0; i<l; i++)
   {
    if(a[i]==' ')
     {
       for(j=i; j<l; j++)
       {
         a[j]=a[j+1];
       } 
       i--;
       l--;
     }
   }
   printf("%s",a);
}