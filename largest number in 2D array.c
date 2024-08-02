#include<stdio.h>
  int main(){
  int a[5][5],i,j,large;
  printf("Enter the elements of arrays");
  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        scanf("%d",&a[i][j]);}}
        printf("The original matrix is: \n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d\t",a[i][j]);}
        printf("\n");}
        large=a[0][0];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
    if(large < a[i][j]){
    large=a[i][j];}
        }
    }
    printf("largest element in the given matrix is:%d",large);
  }
