#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x = malloc(3 * sizeof(int)); // size of int = 4 byte 
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;

    printf("%i\n", x[0]);
}

