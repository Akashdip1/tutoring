#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("Number: ");
    int val = n;

    long fact = 1; // default

    while (n > 0)
    {
        fact = fact * n;
        n--;
    }

    printf("Factorial of %i is: %li\n", val, fact);
}

// 3 1 = 3
// 2 3 = 6
// 1 6 = 6
