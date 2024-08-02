#include<stdio.h>
struct student 
{
    int rollno;
    char name[30];
    float marks;
};
struct student s1,s2;
void main()
{
    struct student* ptr=&s1;
     struct student* ptr1=&s2;
    printf("Enter the values stored in s1\n");
    scanf("%d %s %f",&ptr->rollno,ptr->name,&ptr->marks);
    printf("Enter the values stored in s2\n");
    scanf("%d %s %f",&(*ptr1).rollno,(*ptr1).name,&(*ptr1).marks);
    printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
    printf("%d %s %f",ptr1->rollno,ptr1->name,(*ptr1).marks);
}
