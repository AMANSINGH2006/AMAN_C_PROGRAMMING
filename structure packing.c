#include<stdio.h>
#pragma pack(1)   // by using this less memory is occupied
struct anshika
{
    char a;
    int b;
    double c;
};
void main()
{
    struct anshika j;
    printf("%d",sizeof(j));
}