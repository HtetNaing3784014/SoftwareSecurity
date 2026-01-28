#include <stdio.h>

/**
 *  The program outputs unexpected behavirior due to format string vulnerability.
 *  It uses user input directly in printf without a format specifier.
 */

int main() {
    char input[50];
    fgets(input, 50, stdin);
    printf(input);

    return 0;
}
