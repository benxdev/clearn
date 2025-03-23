#include <stdio.h>
int main() {
    int mymult();
    int output;
    output = mymult(324, 598);
    printf("answer is %d\n", output);
   
}

 
    int mymult(int a, int b) {
  
        int c = a * b;
        return c;
     }
