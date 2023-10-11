#include <stdio.h>
#include <string.h>
struct Employee
{
    int id;
    char firstName[50];
    char lastName[50];
    float salary;
};
void addEmployee(struct Employee employees[], int *numEmployees)
{
    if (*numEmployees < 50)
    {
        struct Employee newEmployee;
        printf("Enter Employee ID: ");
        scanf("%d", &newEmployee.id);
        printf("Enter First Name: ");
        scanf("%s", newEmployee.firstName);
        printf("Enter Last Name: ");
        scanf("%s", newEmployee.lastName);
        printf("Enter Salary: ");
        scanf("%f", &newEmployee.salary);

        employees[*numEmployees] = newEmployee;
        (*numEmployees)++;
        printf("Employee added successfully!\n");
    }
    else
    {
        printf("The database is full. Cannot add more employees.\n");
    }
}
void displayEmployees(struct Employee employees[], int numEmployees)
{
    printf("Employee Details:\n");
    for (int i = 0; i < numEmployees; i++)
    {
        printf("ID: %d\n", employees[i].id);
        printf("First Name: %s\n", employees[i].firstName);
        printf("Last Name: %s\n", employees[i].lastName);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("\n");
    }
}
void searchEmployeeByID(struct Employee employees[], int numEmployees, int targetID)
{
    int found = 0;
    for (int i = 0; i < numEmployees; i++)
    {
        if (employees[i].id == targetID)
        {
            printf("Employee Details:\n");
            printf("ID: %d\n", employees[i].id);
            printf("First Name: %s\n", employees[i].firstName);
            printf("Last Name: %s\n", employees[i].lastName);
            printf("Salary: %.2f\n", employees[i].salary);
            printf("\n");
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Employee with ID %d not found.\n", targetID);
    }
}
void searchEmployeeByName(struct Employee employees[], int numEmployees, char targetFirstName[], char targetLastName[])
{
    int found = 0;
    for (int i = 0; i < numEmployees; i++)
    {
        if (strcmp(employees[i].firstName, targetFirstName) == 0 && strcmp(employees[i].lastName, targetLastName) == 0)
        {
            printf("Employee Details:\n");
            printf("ID: %d\n", employees[i].id);
            printf("First Name: %s\n", employees[i].firstName);
            printf("Last Name: %s\n", employees[i].lastName);
            printf("Salary: %.2f\n", employees[i].salary);
            printf("\n");
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Employee with name %s %s not found.\n", targetFirstName, targetLastName);
    }
}
int main()
{
    struct Employee employees[50];
    int numEmployees = 0;
    int choice;

    do
    {
        printf("Employee Database Menu:\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Search Employee by Name\n");
        printf("5. Exit\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addEmployee(employees, &numEmployees);
            break;
        case 2:
            displayEmployees(employees, numEmployees);
            break;
        case 3:
        {
            int searchID;
            printf("Enter Employee ID to search for: ");
            scanf("%d", &searchID);
            searchEmployeeByID(employees, numEmployees, searchID);
        }
        break;
        case 4:
        {
            char searchFirstName[50];
            char searchLastName[50];
            printf("Enter First Name: ");
            scanf("%s", searchFirstName);
            printf("Enter Last Name: ");
            scanf("%s", searchLastName);
            searchEmployeeByName(employees, numEmployees, searchFirstName, searchLastName);
        }
        break;
        case 5:
            printf("Exiting the program. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
    while (choice != 5);
    return 0;
}
