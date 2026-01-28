#include <stdio.h>

/**
 *  The program outputs unexpected behavirior due to format string vulnerability.
 *  It uses user input directly in fprintf without a format specifier.
 *  As it was with printf in task2.c, this unexpected behoavior still exists. 
 */

int main() {
    char input[50];
    fgets(input, 50, stdin);
    fprintf(stdout, input);

    return 0;
}