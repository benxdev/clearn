#include <stdio.h>

int main() {
  float fahr, celsius;
  float lower, upper, step;
   char entry[] = "Entry";
   char heading[] = "A Celsius to Fahrenheit Temperatue Converted Table:";

   lower = 0;
   upper = 100;
   step = 1;
   
   celsius = lower;
    printf("%s\n", heading);
   while (celsius <= upper) {
    fahr = ((celsius * 9.0) / 5.0)  + 32.0;
    printf("%s\t %3.0f \t %6.1f \n", entry, celsius, fahr);

   celsius = celsius + step;
   } 
}
