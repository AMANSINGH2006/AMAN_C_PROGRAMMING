#include<stdio.h>
int main()
{
    int i,j,n,temp;
    int arr[7]={9,1,3,4,10,5,6};
        for(i=0;i<6;i++)
        {
            for(j=0;j<=6-i;j++)
            {
                if(arr[j]<arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        printf("The sorted array is:\n");
        for(i=0;i<7;i++){
        printf("%d",arr[i]);
        }
    return 0;
}