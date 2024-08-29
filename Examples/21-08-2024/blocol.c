#include <stdio.h>

// Prototyping
void block(void);
void column(void);

const int N = 8;

    
int main(void)
{
    // # = coin
    column();
    block();
    
}


void block(void)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("#");   
        }
        printf("\n");
    }
}

// ###
// ###
// ###

void column(void)
{
    int i = 0; // for the while loop

    while (i < N)
    {
        printf("#\n");
        i += 1;
    }
}

// # 
// # 
// #
