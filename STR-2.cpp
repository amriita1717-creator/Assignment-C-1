#include <stdio.h>
#include <string.h> // For strcpy

// Define the Student structure
struct Student {
    char name[50];
    int marks;
};

int main() {
	printf("AMRITA and 125113019\n");
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student students[numStudents]; // Array of Student structures

    // Input student data
    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name); // Read name
        printf("Marks: ");
        scanf("%d", &students[i].marks); // Read marks
    }

    // Find the student with the highest marks
    int highestMarks = students[0].marks;
    int topperIndex = 0; // Store the index of the topper

    for (int i = 1; i < numStudents; i++) {
        if (students[i].marks > highestMarks) {
            highestMarks = students[i].marks;
            topperIndex = i;
        }
    }

    // Display the topper's information
    printf("\nStudent with the highest marks:\n");
    printf("Name: %s\n", students[topperIndex].name);
    printf("Marks: %d\n", students[topperIndex].marks);

    return 0;
}
