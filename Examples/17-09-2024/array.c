#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int scores[3];

    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;

    for (int i = 0; i < 3; i++)
    {
        printf("Score %i: %i\n", i, scores[i]);
    }
    

}
