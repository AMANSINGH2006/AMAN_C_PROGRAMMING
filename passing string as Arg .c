#include<stdio.h> 
void modify(char[],char[]); // Here we can also declare int as "void modify(char*,char*);"
void main()
{
    char str1[]="jenny";
    char str2[]="khatri";
    modify(str1,str2);      // main() is giving address to the "function definition"
}

void modify(char str1[], char str2[])  /* we can also write it is as "void modify(char* str1,char* str2)"
                                        because it accept address  from main() i.e of type call by reference*/
{
     int i,l=0;
    for (i=0; str1[i]!='\0'; i++)
    {
       l=l+1;
    }
    str2[1]='K';
      printf(" length of string is: %d\n",l);
      printf(" after modification string is: %s %s",str1,str2);

}