#include <stdio.h>

int main(){

    double pi = 3.14159265358979;
    double e = 2.7182818284590;

    // with double you can store 15-16 digits after decimal


    printf("The value of PI is %.15lf\n", pi);
    printf("The value of e is %.15lf\n", e);


    // if you have a decimal number that needs high precision use double
    
    //default behavior of c is to display 6 digits after the decimals
    return 0;
}
