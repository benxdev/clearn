#include <stdio.h>

int main() {
	int digits[100];

	for (int i = 0; i <= 100; ++i) {
		digits[i] = i;
	}

	printf("The even numbers in the array are:\n");

	for (int i = 0; i <= 100; ++i ) {
		if ( i % 2 == 0) {
			printf("%d ", digits[i]);
		}
	}
	printf("\n");
	return 0;
}