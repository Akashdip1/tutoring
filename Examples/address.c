#include <stdio.h>

int main(void)
{
    int n = 50;
    
    int *p = &n; // Get the address of variable 'n'
                 // &n means give me the address of 'n' --> some hexadecimal value
                 // Then store the address to the pointer variable named 'p'
                 // int-star

    printf("%i\n", *p);
}
