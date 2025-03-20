#include <stdio.h>
// min max
int main () {
    int first = 1;
    int val, minval, maxval;

    while (scanf("%d", &val) != EOF) {
        if (first || val > maxval ) maxval = val;
        if (first || val < minval ) minval = val;
        first = 0;
    }

    printf("max value is %d\nmin value is %d\n", maxval, minval);
}
