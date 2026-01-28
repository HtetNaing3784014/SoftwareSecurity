#include <stdio.h>

/**
 *  The vulnerability in this program has been fixed by, by adding "%s" in printf, which is using a format specifier in printf.
 *  This prevents format string vulnerabilities by ensuring that user input is treated as data rather than a format string.
 */

int main() {
    char input[50];
    fgets(input, 50, stdin);
    printf("%s",input);

    return 0;
}
