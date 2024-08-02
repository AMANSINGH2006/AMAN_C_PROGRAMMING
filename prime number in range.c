#include<stdio.h>
 void main(){
    int working_hour,over_time,over_time_pay,count=1;
    while(count<=10){
        printf ("enter the working hour of an employee no.%d",count);
    scanf("%d",&working_hour);
    if(working_hour>40){
        over_time=working_hour-40;
        over_time_pay=over_time*12;
        printf("%d\n",over_time_pay); }
    else
    printf("you should have to work over time to gate over time pay");
    count++;}}
   