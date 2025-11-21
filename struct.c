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
    s1.age = 20;
    s1.marks = 78.97;
    strcpy(s1.name,"manu");

    struct student s2;
    s2.age = 19;
    s2.marks = 88.97;
    strcpy(s2.name,"kartik");

    struct student s3;
    s3.age = 18;
    s3.marks = 95.65;
    strcpy(s3.name,"akshay");
    
    struct student s4 = {"jhenkar",18,77.78};

    printf("%s\n",s2.name);
    printf("%d\n",s2.age);
    printf("%f\n",s2.marks);
}