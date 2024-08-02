#include<stdio.h>
#include<string.h>
void main()
{
    char annu[30];
    int i,l=0,j;
    printf("Enter string please:");
    gets(annu);
    l=strlen(annu);
    for(i=0; i<l; i++)
    {
        if(annu[i]=='a'|| annu[i]=='A' || annu[i]=='e' || annu[i]=='E' || annu[i]=='i' || annu[i]=='I' || annu[i]=='o' || annu[i]=='O' || annu[i]=='u' || annu[i]=='U')
        {
            for(j=i;j<l;j++)
            {
               annu[j]=annu[j+1];
            }
        i--;
        l--;
        }
    }
    puts(annu);
}