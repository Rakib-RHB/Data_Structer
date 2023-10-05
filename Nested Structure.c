# include <stdio.h>

// Define a structure for an address
struct Address
{
    char street[100];
    char city[50];
    char state[20];
    char postal_code[10];
};

// Define a structure for a person
struct Person
{
    char name[100];
    int age;
    struct Address address; // A nested structure as a member
};

int main()
{
    // Create an instance of the Person structure
    struct Person person1;

    // Populate the person's data
    strcpy(person1.name, "John Doe");
    person1.age = 30;

    // Populate the person's address (nested structure)
    strcpy(person1.address.street, "123 Main Street");
    strcpy(person1.address.city, "Anytown");
    strcpy(person1.address.state, "CA");
    strcpy(person1.address.postal_code, "12345");

    // Display the person's information
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Address:\n");
    printf("  Street: %s\n", person1.address.street);
    printf("  City: %s\n", person1.address.city);
    printf("  State: %s\n", person1.address.state);
    printf("  Postal Code: %s\n", person1.address.postal_code);

    return 0;
}
