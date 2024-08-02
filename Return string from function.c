#include<stdio.h>
char* display();
void main()
{
    char* str;
    str=display();
    str[0]='z';
    printf("string is: %s",str);
}
char* display()
{
    static char str[]="jenny";
    return str;
}
