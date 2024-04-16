#include <cs50.h>
#include <stdio.h>

int main(void){
    int x = get_int("x: ");
    int y = get_int("y: ");
    
    double z = (double) x / (double) y;

    printf("Result: %.20f\n", z); // (0).333333...)
    printf("X: %i, Y: %i\n", x, y);
}
