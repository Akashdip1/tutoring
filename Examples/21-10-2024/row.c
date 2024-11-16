// To count factorial of a given number
// e.g. 5!= 5x4x3x2x1 = 120

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("Enter a number: ");

    int fact = 1;

    for (int i = 0; i < n; i++)
    {
        fact = fact * (n - i);
    }
    printf("%i\n", fact);

}
