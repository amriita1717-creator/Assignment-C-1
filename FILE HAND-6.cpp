// C Program to Store Information of Students Using Structure
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create the student structure
struct Student {
    char* name;
    int roll_number;
    int age;
    double total_marks;
};

int main() {
    printf("AMRITA and 125113019\n");
	    // Create an array of student structure variable with
  	// 4 Student's records
    struct Student students[4];
  	int n = sizeof(students)/sizeof(struct Student);

    // Get the students data
    students[0].roll_number = 1;
    students[0].name = "Vasu";
    students[0].age = 12;
    students[0].total_marks = 78.50;

    students[1].roll_number = 5;
    students[1].name = "Parth";
    students[1].age = 10;
    students[1].total_marks = 56.84;

    students[2].roll_number = 2;
    students[2].name = "Komal";
    students[2].age = 11;
    students[2].total_marks = 87.94;

    students[3].roll_number = 4;
    students[3].name = "Khushi";
    students[3].age = 12;
    students[3].total_marks = 89.78;

    
    // Print the Students information
    printf("========================================\n");
    printf("           Student Records              \n");
    printf("========================================\n");
    
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("  Name        : %s\n", students[i].name);
        printf("  Roll Number : %d\n", students[i].roll_number);
        printf("  Age         : %d\n", students[i].age);
        printf("  Total Marks : %.2f\n", students[i].total_marks);
    }
    
    printf("========================================\n");

    return 0;
}
