#include <stdio.h>

// Define a structure for student information
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
	printf("AMRITA and 125113019\n");
    int n, i;
    float totalMarks = 0.0, averageMarks;

    // Get the number of students from the user
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare an array of Student structures
    struct Student students[n];

    // Input marks for each student
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name); // Use %s for string input
        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);

        // Add current student's marks to totalMarks
        totalMarks += students[i].marks;
    }

    // Calculate the average marks
    if (n > 0) { // Avoid division by zero if no students are entered
        averageMarks = totalMarks / n;
        printf("\nAverage marks of %d students: %.2f\n", n, averageMarks);
    } else {
        printf("\nNo students entered, cannot calculate average.\n");
    }

    return 0;
}
