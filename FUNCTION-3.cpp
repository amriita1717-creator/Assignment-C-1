#include <stdio.h>

// Function to calculate GCD using the Euclidean algorithm (recursive)
int findGCD(int a, int b) {
    if (b == 0) {
        return a; // Base case: when b is 0, a is the GCD
    } else {
        return findGCD(b, a % b); // Recursive call: GCD(a, b) = GCD(b, a % b)
    }
}

int main() {
	printf("AMRITA and 125113019\n");
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Call the findGCD function and print the result
    printf("GCD of %d and %d is %d.\n", num1, num2, findGCD(num1, num2));

    return 0;
}
