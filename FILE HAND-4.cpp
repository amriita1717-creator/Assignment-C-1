#include <stdio.h>
#include <stdlib.h> // For exit()

int main() {
	printf("AMRITA and 125113019\n");
    FILE *sourceFile;
    FILE *destFile;
    char sourcePath[100];
    char destPath[100];
    char ch;

    // Get source file path from user
    printf("Enter source file path: ");
    scanf("%s", sourcePath);

    // Get destination file path from user
    printf("Enter destination file path: ");
    scanf("%s", destPath);

    // Open source file in read mode
    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file '%s'.\n", sourcePath);
        exit(EXIT_FAILURE);
    }

    // Open destination file in write mode
    destFile = fopen(destPath, "w");
    if (destFile == NULL) {
        printf("Error: Could not open destination file '%s'.\n", destPath);
        fclose(sourceFile); // Close source file before exiting
        exit(EXIT_FAILURE);
    }

    // Copy contents character by character
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully from '%s' to '%s'.\n", sourcePath, destPath);

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
