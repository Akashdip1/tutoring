#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        int num_of_spaces = n - i;

        for (int k = 0; k < num_of_spaces; k++)
        {
            printf(" ");
        }

        for (int j = 0; j < n; j++)
        {
             printf("#");
        }

        printf("\n");
    }
}
