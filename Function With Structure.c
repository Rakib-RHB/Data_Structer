# include <stdio.h>
# include <string.h>

// Define a structure for books
struct Book
{
    char title[100];
    char author[100];
    double price;
};

// Function to display a book
void displayBook(struct Book book)
{
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Price: $%.2f\n", book.price);
    printf("\n");
}

int main()
{
    // Create a book without using the initializeBook function
    struct Book book1;
    strcpy(book1.title, "The Great Gatsby");
    strcpy(book1.author, "F. Scott Fitzgerald");
    book1.price = 12.99;

    // Display the book using the displayBook function
    displayBook(book1);

    return 0;
}
