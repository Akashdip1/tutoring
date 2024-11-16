#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("Amount of money to be returned: ");
    // How many 25 rs I can give
    int ans = n / 25;

    printf("Ans: %i\n", ans);
}
