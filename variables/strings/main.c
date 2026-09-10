#include <stdio.h>

int main(){

    //in c we do not have strings, instead they are series of characters
    // use s for format specifier for strings
    //we use an array of characters to store a string

    char name[] = "Pizza Lover";
    char food[] = "Pizza";
    char email[] = "pizzalover123@google.com";

    printf("Hello %s\n", name);
    printf("My favorite food is %s\n", food);
    printf("Your email is %s\n", email);

    return 0;
}