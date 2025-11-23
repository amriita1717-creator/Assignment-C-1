#include <stdio.h>

void findMinMax(int *arr, int n, int *max, int *min) {
    // Initialize max and min with the first element of the array
    // using pointer dereferencing.
    *max = *arr;
    *min = *arr;

   
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > *max) {
            *max = *(arr + i); // Update max if a larger element is found
        }
        if (*(arr + i) < *min) {
            *min = *(arr + i); // Update min if a smaller element is found
        }
    }
}

int main() {
	printf("AMRITA and 125113019\n");
    int arr[] = {5, 2, 7, 6, 1, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements

    int max_val, min_val; // Variables to store the found max and min
    findMinMax(arr, n, &max_val, &min_val);

    printf("Largest number: %d\n", max_val);
    printf("Smallest number: %d\n", min_val);

    return 0;
}
