#include<stdio.h>
float multiply(float,float);
int main()
{
    float c,a,b;
   // int b;
    printf("Enter the number\n");
    scanf("%f%f",&a,&b);
    c=multiply(a,b);
    printf("c=%f",c);
}
float multiply(float a,float b)
{
    float c=0;
    c=a*b;
    return (c);
}
 