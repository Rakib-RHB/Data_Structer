#include <stdio.h>
#include <string.h>

// Define the Employee structure
struct Employee
{
    int id;
    char firstName[50];
    char lastName[50];
    float salary;
};

// Function to add a new employee to the database
void addEmployee(struct Employee employees[], int *numEmployees)
{
    if (*numEmployees >= 50)
    {
        printf("Employee database is full. Cannot add more employees.\n");
        return;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &employees[*numEmployees].id);

    printf("Enter First Name: ");
    scanf("%s", employees[*numEmployees].firstName);

    printf("Enter Last Name: ");
    scanf("%s", employees[*numEmployees].lastName);

    printf("Enter Salary: ");
    scanf("%f", &employees[*numEmployees].salary);

    (*numEmployees)++;
    printf("Employee added successfully!\n");
}

// Function to display all employees in the database
void displayEmployees(struct Employee employees[], int numEmployees)
{
    if (numEmployees == 0)
    {
        printf("No employees in the database.\n");
        return;
    }

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

// Function to search for an employee by ID
void searchEmployeeByID(struct Employee employees[], int numEmployees, int targetID)
{
    for (int i = 0; i < numEmployees; i++)
    {
        if (employees[i].id == targetID)
        {
            printf("Employee Details:\n");
            printf("ID: %d\n", employees[i].id);
            printf("First Name: %s\n", employees[i].firstName);
            printf("Last Name: %s\n", employees[i].lastName);
            printf("Salary: %.2f\n", employees[i].salary);
            return;
        }
    }
    printf("Employee with ID %d not found.\n", targetID);
}

// Function to search for an employee by first name and last name
void searchEmployeeByName(struct Employee employees[], int numEmployees, char targetFirstName[], char targetLastName[])
{
    for (int i = 0; i < numEmployees; i++)
    {
        if (strcmp(employees[i].firstName, targetFirstName) == 0 && strcmp(employees[i].lastName, targetLastName) == 0)
        {
            printf("Employee Details:\n");
            printf("ID: %d\n", employees[i].id);
            printf("First Name: %s\n", employees[i].firstName);
            printf("Last Name: %s\n", employees[i].lastName);
            printf("Salary: %.2f\n", employees[i].salary);
            return;
        }
    }
    printf("Employee with name %s %s not found.\n", targetFirstName, targetLastName);
}

int main()
{
    struct Employee employees[50];
    int numEmployees = 0;
    int choice;

    do
    {
        printf("\nEmployee Database Menu:\n");
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
            int targetID;
            printf("Enter Employee ID to search for: ");
            scanf("%d", &targetID);
            searchEmployeeByID(employees, numEmployees, targetID);
            break;
        }
        case 4:
        {
            char targetFirstName[50];
            char targetLastName[50];
            printf("Enter First Name to search for: ");
            scanf("%s", targetFirstName);
            printf("Enter Last Name to search for: ");
            scanf("%s", targetLastName);
            searchEmployeeByName(employees, numEmployees, targetFirstName, targetLastName);
            break;
        }
        case 5:
            printf("Exiting the program. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    }
    while (choice != 5);

    return 0;
}

