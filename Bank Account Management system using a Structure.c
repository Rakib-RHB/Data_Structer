#include<stdio.h>
#include<string.h>

typedef struct
{
    int accountNumber;
    char accountHolderName[100];
    double accountBalance;
} Baccount;

void addAccount(Baccount account[], int *i)
{
    printf("Enter Account Number : ");
    scanf("%d",&account[*i].accountNumber);
    printf("Enter Account Holder Name : ");
    scanf("%s",&account[*i].accountHolderName);
    printf("Enter Account Balanced : ");
    scanf("%lf",&account[*i].accountBalance);
    (*i)++;
    printf("Account Added Successfully. \n");


}
void display(Baccount account[], int Count)
{
    printf("\nBank Accounts:\n");
    for (int i = 0; i < Count; i++)
    {
        printf("Account Number: %d\n", account[i].accountNumber);
        printf("Account Holder Name: %s\n", account[i].accountHolderName);
        printf("Account Balance: %.2lf\n", account[i].accountBalance);
        printf("\n\n");
    }
}
void update( Baccount accounts[], int Count)
{
    int Number;
    printf("Enter the account number to update: ");
    scanf("%d", &Number);

    for (int i = 0; i < Count; i++)
    {
        if (accounts[i].accountNumber == Number)
        {
            printf("Enter new account holder name: ");
            scanf("%s", accounts[i].accountHolderName);
            printf("Enter new account balance: ");
            scanf("%lf", &accounts[i].accountBalance);
            printf("Account information updated successfully!\n");
            return;
        }
    }

    printf("Account not found!\n");
}



int main()
{
    Baccount account[100];
    int count = 0;
    while(1)
    {
        printf("\nBank Account Management System Menu:\n");
        printf("---------------------------------------\n");
        printf("1. Add Account\n");
        printf("2. Display All Accounts\n");
        printf("3. Update Account\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        {
            addAccount(account,&count);
            break;
        }
        case 2:
        {
            display(account,count);
            break;
        }
        case 3:
        {
            update(account,count);
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


