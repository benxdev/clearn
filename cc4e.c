#include <stdio.h>

int main() {
	char line[1000];
	printf("Enter a new line:\n");
	fgets(line, 1000, stdin);
	printf("Line: %s", line);
	return 0;
}