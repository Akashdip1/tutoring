#include <stdio.h>
#include <cs50.h>

int main(void){
    const int n = get_int("Number: ");
    for(int row = 1;row <= n;row++){
        for(int column = row;column < n;column++){
        printf(" ");
    }
        for(int column = 1;column < row;column++){
        printf("#");
    }
        printf("\n");
    }
}

