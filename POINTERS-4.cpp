#include <stdio.h> // Required for printf
#include <string.h> // Required for strlen (to determine size for malloc)
#include <stdlib.h> // Required for malloc and free

void copyString(char *destination, const char *source) {
    while (*source != '\0') { // Loop until the null terminator of the source string is reached
        *destination = *source; // Copy the character pointed to by source to the location pointed to by destination
        source++; // Move the source pointer to the next character
        destination++; // Move the destination pointer to the next character
    }
    *destination = '\0'; // Add the null terminator to the end of the destination string
}

int main() {
	printf("AMRITA and 125113019\n");
    const char *sourceString = "Hello, World!";
    char *destinationString;

    // Allocate memory for the destination string, including space for the null terminator
    destinationString = (char *)malloc(strlen(sourceString) + 1); 

    if (destinationString == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Indicate an error
    }

    copyString(destinationString, sourceString); // Call the custom function to copy the string

    printf("Source string: %s\n", sourceString);
    printf("Destination string: %s\n", destinationString);

    free(destinationString); // Free the dynamically allocated memory
    return 0; // Indicate successful execution
}
