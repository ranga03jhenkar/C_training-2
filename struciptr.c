#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[100];
    int age;
    float marks;
};

void main()
{
    struct student s1;
    struct student *p = &s1;
    strcpy(p -> name,"akshay");
    p -> age = 18;
    p -> marks = 90.78;
    printf("%f\n",p->marks);
    printf("%d\n",p->age);
    printf("%s\n",p->name);
}