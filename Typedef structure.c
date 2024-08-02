#include<stdio.h>
typedef struct student{
    int rollno;
    char name[20];
    float marks;
}student;
void main()
{
    student s={10,"jenny",65.25};
    printf("%d %s %f",s.rollno,s.name,s.marks);
}