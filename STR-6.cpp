#include <stdio.h>
#include <string.h> // Required for strcpy

// Define the Employee structure
struct Employee {
    int id;
    char name[50];
    float salary;
};

// Function to display employee details, taking an Employee structure by value
void displayEmployeeDetails(struct Employee emp) {
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);
}

int main() {
	printf("AMRITA and 125113019\n");
    // Declare an Employee structure variable
    struct Employee emp1;

    // Get employee details from the user
    printf("Enter Employee ID: ");
    scanf("%d", &emp1.id);

    // Clear the input buffer after reading an integer
    while (getchar() != '\n'); 

    printf("Enter Employee Name: ");
    fgets(emp1.name, sizeof(emp1.name), stdin);
    emp1.name[strcspn(emp1.name, "\n")] = '\0'; // Remove trailing newline if present

    printf("Enter Employee Salary: ");
    scanf("%f", &emp1.salary);

    // Call the function to display details, passing the structure by value
    displayEmployeeDetails(emp1);

    return 0;
}
