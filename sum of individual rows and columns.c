#include<stdio.h>
void main(){
    int a[3][3],i,j,sumrow,sumcol;
    printf("Enter the elements of an arrays");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);}}
    printf("matrix is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);}
        printf("\n");}
    for(i=0;i<3;i++){  
        sumrow=sumcol=0;
        for(j=0;j<3;j++){
            sumrow=sumrow+a[i][j];
            sumcol=sumcol+a[j][i];}
         printf("\nsumrow=%d sumcol=%d",sumrow,sumcol);}
        printf("\n");}