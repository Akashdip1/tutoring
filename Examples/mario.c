#include <stdio.h>
#include <cs50.h>

int main(void){
    int n = 4;  // Number of bricks
    
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("#");
        }
        printf("\n");
    }
    
}

