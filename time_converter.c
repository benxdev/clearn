#include <stdio.h>

#define FACTOR_168 168

int main() {
    float hours = 50000000000000.0;
    printf("%0.6f", hours / FACTOR_168);
}