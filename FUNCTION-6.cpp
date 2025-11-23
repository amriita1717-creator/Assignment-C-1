#include <stdio.h>
#include <string.h>
#include <stdbool.h> // For using bool type

// Function to check if a string is a palindrome
bool isPalindrome(const char *str) {
    int length = strlen(str);
    int left = 0;
    int right = length - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false; // Not a palindrome
        }
        left++;
        right--;
    }
    return true; // Is a palindrome
}

int main() {
	printf("AMRITA and 125113019\n");
    char str1[] = "madam";
    char str2[] = "hello";
    char str3[] = "racecar";

    if (isPalindrome(str1)) {
        printf("\"%s\" is a palindrome.\n", str1);
    } else {
        printf("\"%s\" is not a palindrome.\n", str1);
    }

    if (isPalindrome(str2)) {
        printf("\"%s\" is a palindrome.\n", str2);
    } else {
        printf("\"%s\" is not a palindrome.\n", str2);
    }

    if (isPalindrome(str3)) {
        printf("\"%s\" is a palindrome.\n", str3);
    } else {
        printf("\"%s\" is not a palindrome.\n", str3);
    }

    return 0;
}
