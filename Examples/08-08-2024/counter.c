#include <stdio.h>

int main(void)
{
    int score = 100; // You can use either uppercase, lowercase, intiger or underscore in your variable name
     // But you can't put underscore or intiger in the beginning of your name
    
    // Kohli scores a 4
    score = score + 4;
    printf("Score: %i\n", score);

    // Kohli scores a 6
    score += 6;
    printf("Score: %i\n", score);

    // Kohli scores a single
    score++;
    printf("Score: %i\n", score);
}
