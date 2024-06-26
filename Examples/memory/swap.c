#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x: %i, y: %i\n", x, y);
   
    swap(&x, &y);
    
    printf("x: %i, y: %i\n", x, y);
}

void swap(int *a, int *b) // we are passing two addresses
{
    int tmp;
    tmp = *a; // saved a value
    *a = *b;   // b value in a
    *b = tmp; // tmp value in b

}
