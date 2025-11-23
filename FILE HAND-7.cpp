#include <stdio.h>

int main() {
	printf("AMRITA and 125113019\n");
    FILE *file;
    double number;
    double sum = 0.0;
    int count = 0;
    double average;

    // Open the file in read mode
    file = fopen("user_input.txt", "r");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; // Indicate an error
    }

    // Read numbers from the file until EOF
    while (fscanf(file, "%lf", &number) == 1) {
        sum += number;
        count++;
    }

    // Close the file
    fclose(file);

    // Calculate the average if numbers were read
    if (count > 0) {
        average = sum / count;
        printf("Sum of numbers: %.2f\n", sum);
        printf("Average of numbers: %.2f\n", average);
    } else {
        printf("No numbers found in the file.\n");
    }

    return 0; // Indicate successful execution
}
