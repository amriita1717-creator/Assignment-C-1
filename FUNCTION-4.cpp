#include <stdio.h>

// Function to reverse an integer
int reverseInteger(int num) {
    int reversedNum = 0;
    int remainder;

    // Handle negative numbers by reversing the absolute value and then applying the sign
    if (num < 0) {
        return -reverseInteger(-num);
    }

    while (num != 0) {
        remainder = num % 10; // Extract the last digit
        reversedNum = reversedNum * 10 + remainder; // Build the reversed number
        num = num / 10; // Remove the last digit
    }
    return reversedNum;
}

int main() {
	printf("AMRITA and 125113019\n");
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    int reversed = reverseInteger(number);
    printf("Reversed number: %d\n", reversed);

    return 0;
}
