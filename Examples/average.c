#include <cs50.h>
#include <stdio.h>

int main(void){
    int scores[3];
    
    for (int i = 0; i < 3; i++){
        scores[i] = get_int("Score%i: ", i+1);
    }

    printf("Score3 : %i\n",scores[3] );
}
