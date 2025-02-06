#include <stdio.h> 

#define IN 1        // inside a word
#define OUT 0       // outside a word

int main () {
    /* count lines, words, and characters in input */

    int c, nl, nw, nc, state;

    state = OUT;  // sets the value of state to OUT by default (not a word)
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc;       // count and iterate through the next character as long as it not the end of the file yet

        if (c == '\n') {
            ++nl;       // count the number of new lines encountered
        }
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;        // sets the state of the currrent character as not a word 
        }
        else if (state == OUT) {
            state = IN;     // sets current character or group of characters as a word
            ++nw;       // count the number of words encountered
        }
    }

    printf ("%d %d %d \n", nc, nl, nw);
}
