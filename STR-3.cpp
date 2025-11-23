#include <stdio.h>
#include <string.h> // Required for strcpy

// Define the Book structure
struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
	printf("AMRITA and 125113019\n");
    // Declare an array of Book structures
    struct Book books[5]; // Assuming a maximum of 5 books for this example
    int numBooks;

    printf("Enter the number of books (up to 5): ");
    scanf("%d", &numBooks);

    // Input details for each book
    for (int i = 0; i < numBooks; i++) {
        printf("\nEnter details for Book %d:\n", i + 1);
        printf("Title: ");
        // Use fgets to read strings with spaces
        getchar(); // Consume the newline character left by previous scanf
        fgets(books[i].title, sizeof(books[i].title), stdin);
        books[i].title[strcspn(books[i].title, "\n")] = 0; // Remove trailing newline

        printf("Author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        books[i].author[strcspn(books[i].author, "\n")] = 0; // Remove trailing newline

        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    // Display details of books priced above 500
    printf("\n--- Books priced above 500 ---\n");
    int found = 0;
    for (int i = 0; i < numBooks; i++) {
        if (books[i].price > 500.0) {
            printf("\nTitle: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Price: %.2f\n", books[i].price);
            found = 1;
        }
    }

    if (!found) {
        printf("No books found with a price above 500.\n");
    }

    return 0;
}
