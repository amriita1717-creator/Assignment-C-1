#include <stdio.h>

int main() {
	printf("AMRITA and 125113019\n");
    int arr[] = {10, 20, 30, 40, 50}; // Declare and initialize an integer array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    int *ptr = arr; // Declare a pointer and point it to the first element of arr

    printf("Array elements using pointer arithmetic:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptr + i)); // Access and print elements using pointer arithmetic
    }
    printf("\n");

    return 0;
}
