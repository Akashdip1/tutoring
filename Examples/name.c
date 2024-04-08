#include <cs50.h>
#include <stdio.h>

int main(void){
    string answer = get_string("What is your name? ");
    string age = get_string("What is your age? ");
    printf("Hello, %s,of age %i\n", answer,age+10);
}
