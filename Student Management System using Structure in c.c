#include<stdio.h>
#include<string.h>

typedef struct
{
    int roll;
    char Name[100];
    char date[20];
    char address[100];

} student;

void addstudent(student x[], int *i)
{
    student new;
    printf("Enter Roll Number : ");
    scanf("%d",&new.roll);
    for (int j = 0; j < *i; j++)
    {
        if (x[j].roll == new.roll)
        {
            printf("Roll number already exists. Please choose a unique roll number.\n");
            return;
        }
    }
    printf("Enter Student Name : ");
    scanf("%s",&new.Name);
    printf("Enter Date of Birth : ");
    scanf("%s",&new.date);
    printf("Enter Student Adress : ");
    scanf("%s",&new.address);
    x[*i] = new;
    (*i)++;
    printf("Student Information Added Successfully. \n");

}
void display(student x[], int Count)
{
    printf("\nStudent Information:\n");
    for (int i = 0; i < Count; i++)
    {
        printf("Roll Number: %d\n", x[i].roll);
        printf("Enter Student Name: %s\n", x[i].Name);
        printf("Date of Birth : %s\n", x[i].date);
        printf("Enter Student Adress : %s",x[i].address);
        printf("\n\n");
    }
}
void update( student y[], int Count)
{
    int Number;
    printf("Enter Student roll number to update: ");
    scanf("%d", &Number);

    for (int i = 0; i < Count; i++)
    {
        if (y[i].roll == Number)
        {
            printf("Enter new Student Name: ");
            scanf("%s",&y[i].Name);
            printf("Enter Date of Birth : ");
            scanf("%s",&y[i].date);
            printf("Enter Student Adress : ");
            scanf("%s",&y[i].address);

            printf("Student information updated successfully \n");
            return;
        }
    }

    printf("Student Information not found!\n");
}



int main()
{
    student x[100];
    int count = 0;
    while(1)
    {
        printf("\nStudent Management System Menu:\n");
        printf("---------------------------------------\n");
        printf("1. Add Student\n");
        printf("2. Display All student\n");
        printf("3. Update Student\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        {
            addstudent(x,&count);
            break;
        }
        case 2:
        {
            display(x,count);
            break;
        }
        case 3:
        {
            update(x,count);
            break;
        }
        case 0:
        {
            printf("Exiting the program.\n");
            return 0;
            printf("\n\n");
        }
        default:
        {
            printf("\n\n");
            printf("Invalid choice. Please try again.\n");
            printf("\n\n");
        }
        }

    }

}



