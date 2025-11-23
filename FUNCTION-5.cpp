#include <stdio.h>

// Recursive function to calculate the sum of digits
int sumOfDigits(int num) {
    // Base case: If the number is 0, the sum of its digits is 0.
    if (num == 0) {
        return 0;
    } 
    // Recursive case: Sum the last digit with the sum of digits of the remaining number.
    else {
        return (num % 10) + sumOfDigits(num / 10);
    }
}

int main() {
	printf("AMRITA and 125113019\n");
    int number;
    int sum;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Call the recursive function
    sum = sumOfDigits(number);

    printf("Sum of digits of %d = %d\n", number, sum);

    return 0;
}
