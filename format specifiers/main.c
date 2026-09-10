#include <stdio.h>

int main(){

    int age = 20;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Pizza Lover";

    //tip try to use lf for doubles - for both inputs and outputs

    // printf("%d\n", age);
    // printf("%f\n", price);
    // printf("%lf\n", pi);
    // printf("%c\n", currency);
    // printf("%s\n", name);

    //width

    // int num1 = 1;
    // int num2 = 10;
    // int num3 = -100;

    //you can also left justify these numbers by adding a negative sign before these numbers
    //you can also add leading zeros by preceding the number with a zero
    //if you add a + before d then the positive numbers will have a + sign in front - good for accounting

    // printf("%+d\n", num1);
    // printf("%+d\n", num2);
    // printf("%+d\n", num3);

    //precision

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    //default behavior is adding 6 zeroes after the decimal

    printf("%+7.2f\n", price1);
    printf("%+7.2f\n", price2);
    printf("%+7.2f\n", price3);
}