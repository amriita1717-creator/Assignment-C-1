#include <stdio.h>
#include <stdlib.h> // Required for exit()

int main() {
	printf("AMRITA and 125113019\n");
    FILE *fptr;
    char filename[] = "user_input.txt"; // Name of the file to create
    char userInput[256];                 // Buffer to store user input

    // Open the file in write mode ("w")
    fptr = fopen(filename, "w");

    // Check if the file was opened successfully
    if (fptr == NULL) {
        printf("Error: Could not open file %s\n", filename);
        exit(1); // Exit the program if an error occurs
    }

    printf("Enter text to write to the file (max 255 characters): \n");
    // Read user input from stdin
    fgets(userInput, sizeof(userInput), stdin);

    // Write the user input to the file
    fprintf(fptr, "%s", userInput);

    // Close the file
    fclose(fptr);

    printf("Text successfully written to %s\n", filename);

    return 0;
}
