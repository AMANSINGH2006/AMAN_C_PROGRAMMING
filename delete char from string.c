#include<stdio.h>
#include<string.h>
void main()
{
   char ch[100],a[30];
   int i,j,l=0;
   printf("Enter string:");
   gets(ch);
   l=strlen(ch);
   printf("Enter chars to remove:");
   gets(a);
   for(i=0; i<l; i++)
   {
      if(ch[i]==a[i])
      {
        for(j=i; j<l; j++)
        {
            ch[j]=ch[j+1];
        }
      }
      i--;
      l--;
   }
  ch[l+1]='\0';
  printf("%s",ch);
 }
