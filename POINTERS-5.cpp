#include <stdio.h>
#include <string.h> // For strcpy

struct Person {
    char name[50];
    int age;
};

int main() {
	printf("AMRITA and 125113019\n");
    struct Person p1;
    struct Person *ptr_p1 = &p1; // Pointer to p1

    // Access and modify members using the arrow operator
    strcpy(ptr_p1->name, "Alice");
    ptr_p1->age = 30;

    printf("Name: %s\n", ptr_p1->name);
    printf("Age: %d\n", ptr_p1->age);

    return 0;
}
