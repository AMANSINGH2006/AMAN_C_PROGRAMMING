#include<stdio.h>
#include<stdlib.h>
  enum gender 
    {
        male,
        female,
        other,
    };
    void main()
    {
      enum gender g;
    //   printf("Enter the number to get discount\n");
    //   scanf("%d",&n);

      printf("please enter your gender\n");
      scanf("%d",&g);

      if(g==male){
        printf("discount is 25 percent");
    //  printf("discount is %d ",n*(25/100));
    }
 
      else if (g==female){
        printf("discount is 50 percent");
     // printf("Discount is %d ",n*0.50);
     }
      else{
        printf("no discount please");}
    }
