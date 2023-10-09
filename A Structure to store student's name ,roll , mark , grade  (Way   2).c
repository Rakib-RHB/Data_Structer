/*
Create a structure named Student that has
name, roll, mark and grade as members.
Assume appropriate types and size of
member. Write a program using structure to
A Rahman Structures and Unions 22
read and display the data entered by the
user. Find his/her grade using a user defined function.*/

#include<stdio.h>








typedef struct
{
    char n[50];
    int r;
    float m;
    char g;
} student;

char findGrade(student s)
{
    char g;
    if(s.m >= 90) g = 'A';
    else if(s.m >= 80) g = 'B';
    else if(s.m >= 70) g = 'C';
    else if(s.m >= 60) g = 'D';
    else g = 'F';
    return g;
}

int main()
{
    student s;
    printf("Enter Name : ");

    gets(s.n);
    printf("Enter Roll : ");

    scanf("%d",&s.r);
    printf("Enter Mark : ");

    scanf("%f",&s.m);
    s.g = findGrade(s);

    printf("Grade is %c ",s.g);
    return 0;
}

