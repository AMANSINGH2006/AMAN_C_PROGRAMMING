#include<stdio.h>
void main(){
     int a[4][4],i,j;
    printf("Enter the elements of array");
              for(i=0;i<=3;i++){
              for(j=0;j<=3;j++){
              scanf("%d",&a[i][j]);}}
              printf("The matrix is:\n");
      for(i=0;i<=3;i++){
      for(j=0;j<=3;j++){
      printf("%d\t",a[i][j]);}
      printf("\n");}
      printf("Digonal matrix is:\n");
      for(i=0;i<=1;i++){
        for(j=0;j<=3;j++){
            if(i==j || (i+j)%3==0)
            printf("%d\t",a[i][j]);}
        printf("\n");}}