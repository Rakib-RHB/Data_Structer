/*
Create a structure named Student that has
name, roll, mark and grade as members.
Assume appropriate types and size of
member. Write a program using structure to
A Rahman Structures and Unions 22
read and display the data entered by the
user. Find his/her grade using a user defined function.*/

#include<stdio.h>





char findgrade(float x)
{
    char y;
    if(x >= 90)y='A';
    else if(x >= 80)y='B';
    else if(x >= 70)y='C';
    else if(x >= 60)y='D';
    else y='F';
    return y;

}


typedef struct
{
    char n[50];
    int r;
    float m;
    char g;
}student;

int main()
{
    student s;
    printf("Enter Name : ");
    gets(s.n);
    printf("Enter Roll : ");
    scanf("%d",&s.r);
    printf("Enter Mark : ");
    scanf("%f",&s.m);
    s.g =findgrade(s.m);
    printf("Grade is %c ",s.g);
    return 0;
}
