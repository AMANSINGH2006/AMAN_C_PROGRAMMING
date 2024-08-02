#include<stdio.h>
int main(){
    int a[3][3],i,j;
    printf("Enter the elements of array");
              for(i=0;i<3;i++){
              for(j=0;j<3;j++){
              scanf("%d",&a[i][j]);}}
              printf("The matrix is:");
      for(i=0;i<3;i++){
      for(j=0;j<3;j++){
      printf("%d\t",a[i][j]);}
      printf("\n");}
      printf("The transpose of matrix is:");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("%d\t",a[j][i]);}
printf("\n");}}