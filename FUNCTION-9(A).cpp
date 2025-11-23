//call by value
#include <stdio.h>

void modifyValue(int num) {
    num = num + 10; // Modifies the local copy of num
    printf("Inside function: num = %d\n", num);
}

int main() {
    int x = 5;
    printf("Before function call: x = %d\n", x);
    modifyValue(x); // Passing a copy of x
    printf("After function call: x = %d\n", x); // x remains unchanged
    return 0;
}

