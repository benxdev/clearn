#include <stdio.h>
#define IN 1
#define OUT 0

// Exercise 1-12. Write a program that prints its input one word per line.


int main() {
 char c;
 while ((c = getchar()) != EOF) {
  if (c != ' '){
   putchar(c);
  }
  else {
   putchar('\n');
  }

  
 } 
}

//int main()
//{
//    int c;
//
//    while ((c = getchar()) != EOF)
//    {
//        if (c != ' ')
//        {
//            putchar(c);
//        }
//        else
//        {
//            putchar('\n');
//        }
//    }
//}
