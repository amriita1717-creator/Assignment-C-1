#include <stdio.h>
#include <stdlib.h> // For exit()

int main() {
	printf("AMRITA and 125113019\n");
    FILE *fp1, *fp2, *fp3;
    char ch;

    // Open the first source file in read mode
    fp1 = fopen("user_input.txt", "r");
    if (fp1 == NULL) {
        perror("Error opening user_input.txt");
        exit(EXIT_FAILURE);
    }

    // Open the second source file in read mode
    fp2 = fopen("output.txt", "r");
    if (fp2 == NULL) {
        perror("Error opening output.txt");
        fclose(fp1); // Close the first file if the second one fails
        exit(EXIT_FAILURE);
    }

    // Open the destination file in write mode
    fp3 = fopen("merged_file.txt", "w");
    if (fp3 == NULL) {
        perror("Error opening merged_file.txt");
        fclose(fp1);
        fclose(fp2);
        exit(EXIT_FAILURE);
    }

    // Copy contents of file1.txt to merged_file.txt
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp3);
    }

    // Copy contents of file2.txt to merged_file.txt
    while ((ch = fgetc(fp2)) != EOF) {
        fputc(ch, fp3);
    }

    printf("Contents of file1.txt and file2.txt merged into merged_file.txt successfully.\n");

    // Close all files
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    return 0;
}
