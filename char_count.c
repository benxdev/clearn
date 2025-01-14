#include <stdio.h>

int main() {
  long char_count = 0;
  int c, nl, tab, bl;
  nl = 0;
  tab = 0;
  tab = 0;
  bl = 0;

  while ((c = getchar()) != EOF) {
    if (c != EOF) {   // test for characters
      ++char_count;
    }

    if ( c == '\n') {   // test for new lines
      ++nl;
    }

    if ( c == '\t') {   // test for tabs
      ++tab;
    }

    if ( c == ' ') {   // test for blanks
        ++bl;
    }
  }

  printf("Your input has %ld characters, %d new lines, %d tabs and %d blanks.", char_count, nl, tab, bl);
}