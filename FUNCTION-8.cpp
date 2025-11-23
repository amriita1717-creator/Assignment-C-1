#include <stdio.h>

// Function to calculate the average of an array
float calculateAverage(int arr[], int size) {
    int sum = 0;
    // Calculate the sum of all elements
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    // Return the average as a float to handle decimal values
    return (float)sum / size;
}

int main() {
	printf("AMRITA and 125113019\n");
    int numbers[] = {10, 20, 30, 40, 50};
    // Calculate the size of the array
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);

    // Call the function to get the average
    float average = calculateAverage(numbers, arraySize);

    // Print the result
    printf("The average of the array elements is: %.2f\n", average);

    return 0;
}
