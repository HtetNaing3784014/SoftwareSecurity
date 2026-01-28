#include <stdio.h>

// Task 1

/**
 * This program is safe because it uses fgets to read input which prevents buffer overflow.
 * In printf, the format specifier is used to avoid format string vulnerabilities.
 */

int main() {
    char input[50];
    fgets(input, 50, stdin);
    printf("%s", input);
    return 0;
}

// 

