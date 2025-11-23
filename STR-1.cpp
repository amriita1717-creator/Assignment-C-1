#include <stdio.h>
#include <string.h> // Required for string manipulation functions like strcpy

// Define a structure named 'Student'
struct Student {
    int roll_no;
    char name[50]; // Array to store the student's name
    float marks;
};

int main() {
	printf("AMRITA and 125113019\n");
    // Declare a variable of type 'struct Student'
    struct Student s1;

    // Store student details
    s1.roll_no = 101;
    strcpy(s1.name, "Amrita"); // Use strcpy to copy a string into the char array
    s1.marks = 95.8;

    // Display student details
    printf("Student Details:\n");
    printf("Roll Number: %d\n", s1.roll_no);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks); // %.2f formats the float to two decimal places

    // You can also take input from the user
    struct Student s2;
    printf("\nEnter details for another student:\n");
    printf("Enter Roll Number: ");
    scanf("%d", &s2.roll_no);

    // Clear the input buffer before reading string
    while (getchar() != '\n'); 

    printf("Enter Name: ");
    fgets(s2.name, sizeof(s2.name), stdin); // Use fgets to read string with spaces
    s2.name[strcspn(s2.name, "\n")] = 0; // Remove trailing newline character from fgets

    printf("Enter Marks: ");
    scanf("%f", &s2.marks);

    printf("\nDetails of the second student:\n");
    printf("Roll Number: %d\n", s2.roll_no);
    printf("Name: %s\n", s2.name);
    printf("Marks: %.2f\n", s2.marks);

    return 0;
}
