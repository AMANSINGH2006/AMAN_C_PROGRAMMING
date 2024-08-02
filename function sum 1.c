#include<stdio.h>
/*Here no need to daclare function bacause we are defining the function above the main function
 but if we use main() above the definition funtion then "it will call to definiton function and 
check for function declaration if any of them is not present then it will give you error
 i.e Implicite declaration of function main"*/
void sum()
{
    int a,b,sum=0;
    printf("Enter the number");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("%d\n",sum);   
}
void main()
{
    sum();
    sum();
}

