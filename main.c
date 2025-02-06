#include <stdio.h>

//  Write a program that prints its input one word per line.

 #define IN 1
 #define OUT 0

int main () {
    
    int c, nc, nw, state, currentW;
    state = OUT;
    nc = nw = 0;

    while ((c = getchar() !=  EOF)) {
        if (c == ' ' || c == '\t'  ||  c == '\n') {
            c = currentW;
            
               }

        else if (state = OUT) {
            state = IN;


        }
    }

    printf();

}