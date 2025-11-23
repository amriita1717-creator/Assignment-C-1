#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp = *a; // Store the value pointed to by 'a' in a temporary variable
    *a = *b;       // Assign the value pointed to by 'b' to the location pointed to by 'a'
    *b = temp;     // Assign the temporary value (original value of 'a') to the location pointed to by 'b'
}

int main() {
	printf("AMRITA and 125113019\n");
    int num1, num2;

    // Get input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Call the swap function, passing the addresses of num1 and num2
    swap(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
