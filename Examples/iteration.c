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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

