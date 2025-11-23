    #include <stdio.h>
    #include <string.h> // For strcpy

    struct Date {
        int day;
        int month;
        int year;
    };

    struct Student {
        char name[50];
        struct Date dob; 
    };

    int main() {
    	printf("AMRITA and 125113019\n");
        struct Student s1;

        // Assigning values to the student's name
        strcpy(s1.name, "JASHAN");

        // Assigning values to the nested DOB structure
        s1.dob.day = 15;
        s1.dob.month = 8;
        s1.dob.year = 2007;

        // Printing the student's information
        printf("Student Name: %s\n", s1.name);
        printf("Date of Birth: %02d/%02d/%d\n", s1.dob.day, s1.dob.month, s1.dob.year);

        return 0;
    }
