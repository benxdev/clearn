#include <stdio.h>

// Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.

int main () {

    int c, lc = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {     // check if current char is a blank
            if (lc != ' ') {        // check if last char is not a blank (default value of lc set to 0, hence always true for non-blank char)
                putchar(' ');   
            }
        }
        else {
            putchar(c);     // if not blank, attach the current char to stdout
        }

        lc = c;     // replace the value of last char with the current char and repeat the loop if condition = true.
    }
    return 0;
  
}