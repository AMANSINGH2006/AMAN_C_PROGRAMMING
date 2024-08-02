#include <stdio.h>
union student
{
    int a;            // 4 bytes
    char name[20];    // 1 bytes
    float c;          // 4 bytes
};
int main()
{
    union student Aman;
    union student *ptr = &Aman;
    printf("Enter all the values\n");
    scanf("%d %s %f", &ptr->a, ptr->name, &ptr->c);
    printf("a=%d name=%s c=%f", (*ptr).a, (*ptr).name, (*ptr).c);  // last value is output in union 
}
