#include<stdio.h>
void main(){
    int a[3][3],b[3][3],c[3][3],i,j,k,p,q,m,n,sum;
    printf("The size of matrix");
    scanf("%d%d",&n,&p);
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
if(n!=p){
    printf("multiplication does not exist");
}
    else{
                printf("The multiplication of matrix is:\n");
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    sum=0;
                    for(k=0;k<3;k++){
                            sum=sum+a[i][k]*b[k][j];
                            c[i][j]=sum;  
                    } 
                    printf("%d\t",c[i][j]); 
              }
              printf("\n");
              }
              printf("Transpose of matrix is:\n");
                for(i=0;i<3;i++){
                    for(j=0;j<3;j++){
                        printf("%d\t",c[j][i]);
                    }
                    printf("\n");
                }}}

    