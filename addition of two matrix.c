#include<stdio.h>
void main(){
    int a[3][3],b[3][3],i,j,sum;
    printf("Enter the elements of 1st arrays");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);}}
            printf("Enter the elements of 2nd arrays");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);}}
            printf("first matrix is:\n");
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                  printf("%d\t",a[i][j]);}
                printf("\n");}
            printf("the second matrix is:\n");
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                  printf("%d\t",b[i][j]);}
                printf("\n");}
            printf("the sum mstrix is:\n");
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){  
               sum=a[i][j]+b[i][j];
               printf("%d\t",sum);}
                printf("\n");}}

    