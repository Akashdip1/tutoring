#include <stdio.h>
#include <cs50.h>

int main(void){
    float celcius = get_int("Enter temp in C: ");
    float fahrenheit=(celcius * 1.8) + 32;
    printf("F: %f", fahrenheit);
}
