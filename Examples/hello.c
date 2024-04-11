#include <stdio.h>
#include <cs50.h>

int main(void){
    string name = get_string("What is your name?: ");
    int age = get_int("Enter age: ");
    printf("Hello, %s of %i\n", name, age); //Hello, chan of 17
}

