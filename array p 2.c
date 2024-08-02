#include<stdio.h>
void main(){
int a[10],i;
int even=0,odd=0;
printf("Enter the elements of array");
 for(i=0; i<10; i++){
 scanf("%d",&a[i]);
 if(a[i]%2==0){
 even++;
 }else
 odd++;}
 printf("even number is: %d\n",even);
 printf("odd number is: %d",odd);}