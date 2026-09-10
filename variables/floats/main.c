#include <stdio.h>

int main(){

    float gpa = 3.0;
    float price = 19.99;
    float temperature = -10.1;

    printf("You gpa is %.1f\n", gpa);
    printf("The price is $ %.2f\n", price);
    printf("The temperature is %.1f°F\n", temperature);
    // the floats add 6 zeros towards the end by default
    // you can add .# after the %sign to truncate the zeros to make your output look more real

    return 0;
}