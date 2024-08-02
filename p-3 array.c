#include<stdio.h>
void main(){
    int aman[5],anshika[5],priyansi[5],i,j,k;
    printf("Enter the 1st elements of array");
    for(i=0;i<=4;i++){
        scanf("%d",&aman[i]);}
        printf("Enter the 2nd elements of array");
        for(i=0;i<=4;i++){
            scanf("%d",&anshika[i]);}
            for(i=0;i<=4;i++){
                priyansi[i]=aman[i]+anshika[i];
                printf("the sum is: %d\n",priyansi[i]);}}