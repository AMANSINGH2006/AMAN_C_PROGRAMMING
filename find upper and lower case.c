#include <stdio.h>
#include <string.h>
void main()
{
    char a[30];
    int l = 0, i, count=0,c=0;
    printf("Enter your string:");
    gets(a);
    l = strlen(a);
    for (i = 0; i <l; i++)
    {
        //ASCII value of lower case is between 97 to 122
        if (a[i] >= 97 && a[i] <= 122)
            count++;
            //ASCII value of upper case is between 65 to 90
        else if(a[i]>=65 && a[i<=90])
            c++;
    }
    puts(a);
    printf("Number of upper case is %d\n",c);
    printf("Number of lower case is %d", count);
}