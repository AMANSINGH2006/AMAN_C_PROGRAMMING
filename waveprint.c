#include<stdio.h>
int main()
{
    int i,j,arr[3][3];
    printf("Enter the elements of arry\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&arr[i][j]);
    printf("The original matrix is:\n");
      for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           printf("%d ",arr[i][j]);}
           printf("\n");}
    printf("The wave matrix is:\n");
      for(j=2;j>=0;j--)
    {
        if(j%2==0)
        {
           for(i=0;i<3;i++)
           printf("%d ",arr[j][i]);
        }
        else
           {
             for(i=0;i<3;i++)
            printf("%d ",arr[i][j]);
      }
           printf("\n");
    }
    return 0;
}