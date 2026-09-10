#include <stdio.h>
#include <stdbool.h>

int main(){

    // only two possible values
    // True means 1 and False means 0

    bool isOnline = true;
    bool isStudent = false;
    //isOnline == 1
    //we use booleans internally in programs, like in if statements

    if(isStudent){
        printf("You are Student");
    }
    else{
        printf("You are not a student");
    }

    return 0;

}