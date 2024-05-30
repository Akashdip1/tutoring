#include <cs50.h>
#include <stdio.h>

void draw(int n); //prototyping 

int main(void)
{
    int h = get_int("Enter height: "); // Height of the pyramid
    draw(h);
}

void draw(int n)
{
    if (n <= 0) // Base case
    {
        return;
    }

    draw(n-1); // Draw a pyramid of height n - 1

    // Draw row of length n
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}

