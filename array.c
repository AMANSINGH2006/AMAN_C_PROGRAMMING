#include <stdio.h>
   void  main(){
   int students[5],i;
  float average,sum=0;
  printf("enter the number of students");
for(i=0; i<=4; i++){
    scanf("%d",&students[i]);}
    for(i=0; i<=4; i++){
    sum=sum+students[i];}
    printf("sum of student is %f\n",sum);
average=(sum/5);
printf("average of student is %f",average);
}