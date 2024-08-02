#include<stdio.h>
  int main(){
  int a[5][5],i,j,k,small;
  printf("Enter the elements of arrays");
  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        scanf("%d",&a[i][j]);}}
        printf("The original matrix is: \n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d\t",a[i][j]);}
        printf("\n");}
        small=a[0][0];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++){
            for(k=j+1;k<5;k++){
                if(a[i][j]>a[i][k]){
                    small=a[i][j];
                    a[i][j]=a[i][k];
                    a[i][k]=small;
                }
            }
        }
  }
  printf("elements are arrangend in ascending order :\n");
  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        printf("%d\n",a[i][j]);
    }
    printf("\n");
  }}
