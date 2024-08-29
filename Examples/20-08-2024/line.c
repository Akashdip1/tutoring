#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // # = coin
    int i = 0; // for the while loop
    int n = get_int("Number: "); // No. of symbols to be printed

    while (i < n)
    {
        printf("#");
        i += 1;
    }
    printf("\n");
}

// ##
// ####
// ######
// ##
// ####
// ######
