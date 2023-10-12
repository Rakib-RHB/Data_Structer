/*
Create a simple structure of Student that has the following members:
name
id
age
Now create 2 instances of students and print them.*/


#include <stdio.h>
struct Student
{
    char name[50];
    int id;
    int age;
};

int main()
{
    struct Student student1, student2;
    printf("Student 1:\n");

    strcpy(student1.name, "Rakib Hasan");
    printf("Name: %s\n", student1.name);

    student1.id = 22201096;
    printf("ID: %d\n", student1.id);

    student1.age = 22;
    printf("Age: %d\n", student1.age);

    printf("\nStudent 2:\n");

    strcpy(student2.name, "Ali ");
    printf("Name: %s\n", student2.name);

    student2.id = 22201125;
    printf("ID: %d\n", student2.id);

    student2.age = 22;
    printf("Age: %d\n", student2.age);

    return 0;
}
