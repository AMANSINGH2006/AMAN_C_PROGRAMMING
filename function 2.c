#include<stdio.h>
/*Here no need to "daclare function" bacause we are "defining the function" above the main function
 if main() is below the "definition function" then then it will not give any errorr like "implicite 
 declaraton of function"*/
void prime()
{
    int n,c=0,i;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
      if(n%i==0)
      c++;
    }
    if(c==2)
    {
        printf("number is prime\n");
    }
    else{
        printf("number is not prime\n");
    }
}
void main()
{
    prime();
    prime();
    prime();
}