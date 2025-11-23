#include <stdio.h>
#include <stdlib.h> // For exit()

int main() {
	printf("AMRITA and 125113019\n");
    FILE *filePointer;
    char buffer[256]; // Buffer to store each line

    // Open the file in read mode ("r")
    filePointer = fopen("user_input.txt", "r");

    // Check if the file was opened successfully
    if (filePointer == NULL) {
        printf("Error: Could not open file.\n");
        exit(EXIT_FAILURE); // Exit with an error code
    }

    printf("File contents:\n");

    // Read and print each line until the end of the file
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(filePointer);

    return 0; // Indicate successful execution
}
