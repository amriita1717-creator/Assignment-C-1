//call by reference
#include <stdio.h>

void modifyReference(int *ptr) {
    *ptr = *ptr + 10; // Modifies the value at the address pointed to by ptr
    printf("Inside function: *ptr = %d\n", *ptr);
}

int main() {
    int x = 5;
    printf("Before function call: x = %d\n", x);
    modifyReference(&x); // Passing the address of x
    printf("After function call: x = %d\n", x); // x is now modified
    return 0;
}
