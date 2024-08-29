#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // # = coin
    int n = get_int("Number: "); // No. of symbols to be printed

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");   
        }
        printf("\n");
    }
}

