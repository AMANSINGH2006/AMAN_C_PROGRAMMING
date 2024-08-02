#include<stdio.h>
#include<conio.h>
int  main()
{
    char x;
    printf("enter the number");
    scanf("%c",&x);
    if(x>=-127 && x<=128)
{
      //  printf("%c",ch);
      printf("it is a character ");
 }
    else
    printf("it is not a character");
}