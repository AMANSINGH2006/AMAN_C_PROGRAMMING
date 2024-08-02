#include<stdio.h>
void main()
{
    int arr[50],n,i,key,loc;
    printf(" Enter the size of array ");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to insert:");
    scanf("%d",&key);
    printf("enter the location to insert");
    scanf("%d",&loc);
    for(i=n-1; i>=2;i--)
    {
        arr[i+1]=arr[i];
}
    arr[loc]=key;
    for(i=0;i<n;i++)
printf("%d\n",arr[i]);
}