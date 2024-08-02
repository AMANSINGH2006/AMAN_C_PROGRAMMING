#include<stdio.h>
struct student
{
  int rollno;
  char name[20];
  float marks;  
};
void main()
{
  struct student s1={1,"Aman",85};
    //struct student s2={2,"jenny",90.2};
    //s1=s;
    struct student s2;
    scanf("%d%s%f",&s2.rollno,s2.name,&s2.marks);
    printf("Info for s1\n");
    printf("%d  %s  %f\n", s1.rollno,s1.name,s1.marks);
    printf("Info for s2\n");
     printf("%d  %s  %f", s2.rollno,s2.name,s2.marks);
}
