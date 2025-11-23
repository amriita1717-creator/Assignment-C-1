#include <stdio.h>

int main() {
	printf("AMRITA and 125113019\n");
    int arr[] = {10, 20, 30, 40, 50}; // Declare and initialize an integer array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
    int sum = 0; // Initialize sum to 0
    int *ptr; // Declare an integer pointer

    ptr = arr; // Assign the base address of the array to the pointer (ptr now points to arr[0])

    // Loop through the array using the pointer
    for (int i = 0; i < n; i++) {
        sum += *ptr; // Add the value pointed to by ptr to sum
        ptr++; // Increment the pointer to point to the next element
    }

    printf("The sum of array elements is: %d\n", sum);

    return 0;
}
