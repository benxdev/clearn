#include <stdio.h>

// program to count the number of occurences of digits, blanks and white spaces

int main() {                       
    int c, i, nwhite, nother;   
    int ndigit[10];

    nother = nwhite = 0;

    for (i = 0; i < 10; ++i) {
        ndigit[i] = 0;  // sets all initial values of the number of occurences to zero (0)
    }

    while ((c = getchar()) != EOF) {        // reads through the user input
        if (c >= '0' && c <= '9') {
            ++ndigit[c - '0'];      // determines if a given char is an int and sets this int as an array subscript to display the number of occurences of a given digit
        } else if (c == ' ' || c == '\t' || c == '\n') {
            ++nwhite;
        } else {
            ++nother;
        }
    }

    printf("digits = ");       

    for (i = 0; i < 10; ++i) {
        printf(" %d", ndigit[i]);       // prints the occurences of digits as an array of 10 elements with subscripts indicating the occurences
    }

    printf(", white space  = %d, other = %d\n", nwhite, nother);
                       
}