#include <stdio.h>
#define INDICATOR "#"

// Exercise 1-14. Write a program to print a histogram of the frequencies of different characters in its input.
int main() {
    int i, c, nwhite, nother;
    int ngroup[17];
    nwhite = nother = 0;

    for (i = 0; i < sizeof(ngroup); ++i) {
        ngroup[i] = " ";
    }

    while ((c = getchar()) != EOF) {
        if (c == '1') {
            ngroup[i] = INDICATOR;
            ++ngroup[i];
            printf(ngroup);
        }
    }
}