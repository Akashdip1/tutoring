#include <stdio.h>

int main(void)
{
    int list[10000];

    // Add element 
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    list[3] = 4;

    // Print elemets
    for (int i = 0; i <= 3; i++)
    {
        printf("%i\n",list[i]);
    }
}
