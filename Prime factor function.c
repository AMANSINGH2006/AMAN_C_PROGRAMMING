#include<stdio.h>  
void primefactors(int num)    //function definition
{  
    int count;  
    printf("Prime Factors of %d are ..\n", num);  
    for(count = 2; num > 1; count++)  
    {  
        while(num % count == 0)  
        {  
            printf("%d ", count);  
            num = num / count;  
        }  
    }  
    printf("\n");  
}  
int main()  //calling function
{  
    int num;  
    printf("Enter a positive integer\n");  
    scanf("%d", &num);  
    primefactors(num);  
    return 0;  
} 
