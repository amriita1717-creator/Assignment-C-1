#include <stdio.h>
#include <string.h> // Required for strlen()

int main() {
	printf("AMRITA and 125113019\n");
    char myString[] = "Hello, C!"; // Declare and initialize a string
    int length;

    // Use strlen() to get the length of the string
    length = strlen(myString);

    printf("The string is: \"%s\"\n", myString);
    printf("The length of the string is: %d\n", length);

    return 0;
}
