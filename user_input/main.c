#include <stdio.h>
#include <string.h>

int main(){

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    printf("Enter age here:");
    scanf("%d", &age);

    printf("Enter your GPA");
    scanf("%f", &gpa);

    printf("Enter your grade");
    scanf(" %c", &grade);

    getchar();
    //this can also clear the newline character within the input buffer

    printf("Enter your full name: ");
    // scanf("%s", &name);

    //scanf cannot read any white spaces because it stops reading when it encounters a space

    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    
    //reads a whole line of input, even the enter key


    //&age is the address of the variable
    //if we are not assigning a value to the name, we have to specify its size
    //if you do not assign a value to a variable and use it --> it will cause undefined behavior
    //as a best practice assign some default values

    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    

    return 0;
}