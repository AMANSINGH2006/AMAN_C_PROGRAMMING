#include<stdio.h>
void fun(int*,int*);
void main()
{
    int x=5; 
    int y=7;                           
    fun(&x,&y);                       
    printf("inside main(calling)\n");
    printf("x=%d,y=%d\n",x,y);        
}                                     
void fun(int* ptr1, int* ptr2)       
{                                    
    *ptr1=7;                         
    *ptr2=5;                               
    printf("inside definition(called)\n");
    printf("a=%d,b=%d\n",*ptr1,*ptr2);     
}                                             
