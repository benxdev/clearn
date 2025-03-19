#include <stdio.h>

int main() {
  int usf, euf;
  
  printf("Enter US Floor:\n");
  scanf("%d", &usf);
  euf = usf - 1;
  printf("EU Floor equivalent is %d\n", euf);
  return 0;
}
