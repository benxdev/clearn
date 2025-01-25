#include <stdio.h>

#define LOWER 0
#define CELSIUS_UPPER 100.0
#define FAHR_UPPER 300.0
#define CELSIUS_STEP 1.0
#define FAHR_STEP 20.0


// int main() {
//     int cels;
//     printf("A Celsius to Fahrenheit Temperatue Converted Table: \n");
//     for (cels = LOWER; cels <= CELSIUS_UPPER; cels = cels + CELSIUS_STEP) {
//         printf("%s \t %3d \t %6.1f \n", "Temps", cels, ((cels * 9.0) / 5.0)  + 32.0); // Formula for calc in same line as the print statement
//     }
// }

int main() {
    int fahr;
    printf("A Fahrenheit to Celsius Temperatue Converted Table: \n");
    for (fahr = LOWER; fahr <= FAHR_UPPER; fahr = fahr + FAHR_STEP){
        printf("%s \t %3d \t %6.1f \n", "Temps", fahr, (fahr-32) * 5.0 / 9.0);
    }

}




// // Using a While Loop


// int main() {
//   float fahr, celsius;
//   float lower, upper, step;
//    char entry[] = "Entry";
//    char heading[] = "A Celsius to Fahrenheit Temperatue Converted Table:";

//    lower = 0;
//    upper = 100;
//    step = 1;
   
//    celsius = lower;
//     printf("%s\n", heading);
//    while (celsius <= upper) {
//     fahr = ((celsius * 9.0) / 5.0)  + 32.0;
//     printf("%s\t %3.0f \t %6.1f \n", entry, celsius, fahr);

//    celsius = celsius + step;
//    } 
// }