#include <stdio.h>

int main() {
	printf("AMRITA and 125113019\n");
    int value = 10;          // An integer variable
    int *ptr = &value;       // A pointer to an integer, storing the address of 'value'
    int **dptr = &ptr;       // A pointer to a pointer to an integer, storing the address of 'ptr'

    printf("Original value: %d\n", value);
    printf("Value through ptr: %d\n", *ptr);
    printf("Value through dptr: %d\n", **dptr);

    // Modifying the value using the double pointer
    **dptr = 25;
    printf("Value after modification using dptr: %d\n", value);

    // Printing addresses for clarity
    printf("\nAddress of value: %p\n", (void*)&value);
    printf("Address stored in ptr (address of value): %p\n", (void*)ptr);
    printf("Address of ptr: %p\n", (void*)&ptr);
    printf("Address stored in dptr (address of ptr): %p\n", (void*)dptr);

    return 0;
}
