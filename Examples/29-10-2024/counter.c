#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("Number:");
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", i+1);
    }

    return 0;
}

// To count from 1 to the given Number
//
// Did not use loop
