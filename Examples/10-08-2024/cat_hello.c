#include <stdio.h>

int main(void)
{
    int n = 0;
    while (n < 3) // 3 > 0 // 2 > 0 // 1 > 0 // 0 > 0
    {
        printf("Hello!\n");
        printf("n: %i\n", n);
        n++; // 2 // 2-1 = 1 // 1 -1 = 0
    }
}
