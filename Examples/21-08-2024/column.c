#include <stdio.h>

// Prototyping
void block(int n);
void column(int n);

    
int main(void)
{
    // # = coin
    int n = 4;
    column(6);
    block(5);
    
}


void block(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");   
        }
        printf("\n");
    }
}

// ###
// ###
// ###

void column(int n)
{
    int i = 0; // for the while loop

    while (i < n)
    {
        printf("#\n");
        i += 1;
    }
}

// # 
// # 
// #
