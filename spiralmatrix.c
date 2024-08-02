#include<stdio.h>
void main()
{
    int m,n,i,j,count=0;
    printf("Enter the number of rows\n");
    scanf("%d",&m);
    printf("Enter the number of columns\n");
    scanf("%d",&n);
    int tne=m*n;
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1; 
    int arr[m][n];
    for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
       {
          scanf("%d",&arr[i][j]);
       }  
    }
    while(count<tne)
    {
    for(j=minc;j<=maxc && count<tne;j++)
    {
       printf("%d",arr[minr][j]);
       count++;
    }
    printf("\n");
    minr++;
    for(i=minr;i<=maxr && count<tne;i++)
    {
        printf("%d",arr[i][maxc]);
        count++;
    }
     printf("\n");
    maxc--;
    for(j=maxc;j>=minc && count<tne;j--)
    {
    printf("%d",arr[maxr][j]);
    count++;
    }
     printf("\n");
    maxr--;
    for(i=maxr;i>=minr && count<tne;i--)
    {
    printf("%d",arr[i][minc]);
    count++;
    }
     printf("\n");
    minc++;
}
}