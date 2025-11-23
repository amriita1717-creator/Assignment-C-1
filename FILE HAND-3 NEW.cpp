#include <stdio.h>
#include <stdlib.h> // For exit()

int main() {
	printf("AMRITA and 125113019\n");
    FILE *file;
    char path[100];
    char ch;
    int characters = 0;
    int words = 0;
    int lines = 0;
    int in_word = 0; // Flag to track if currently inside a word

    // Get the file path from the user
    printf("Enter the path to the file: ");
    scanf("%s", path);

    // Open the file in read mode
    file = fopen(path, "r");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error: Unable to open file '%s'.\n", path);
        exit(EXIT_FAILURE); // Exit the program if file cannot be opened
    }

    // Read characters from the file one by one until EOF
    while ((ch = fgetc(file)) != EOF) {
        characters++; // Increment character count for every character read

        // Check for new line
        if (ch == '\n') {
            lines++;
        }

        // Logic to count words
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r') {
            // If a whitespace character is encountered and we were in a word,
            // it means a word has just ended.
            if (in_word) {
                words++;
                in_word = 0; // Reset in_word flag
            }
        } else {
            // If a non-whitespace character is encountered, we are in a word.
            in_word = 1;
        }
    }

    // Handle the last word and line if the file doesn't end with a newline
    if (characters > 0) {
        if (in_word) { // If the file ends with a word
            words++;
        }
        if (ch != '\n') { // If the last character was not a newline
            lines++;
        }
    }

    // Close the file
    fclose(file);

    // Print the results
    printf("\nFile Statistics:\n");
    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total lines: %d\n", lines);

    return 0;
}
