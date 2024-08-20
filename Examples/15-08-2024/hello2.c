#include <stdio.h>


void hello(int n); // void = empty


int main(void)
{
    hello(3);
    int j = 0;
}


void hello(int n) // void = empty
{
    for (int i = 0; i < n; i++)
    {
        printf("Hello\n");
        printf("i : %i\n", i);
    }
} 
