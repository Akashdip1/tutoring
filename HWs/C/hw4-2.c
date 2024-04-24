#include <stdio.h>
#include <cs50.h>
    int main(void){
        const int n = 5;
        for(int row = 1;row <= n;row++){
            for(int column = row;column < n;column++){
            printf(" ");
        }for(int column = 1;column <= row;column++){
            printf("#");
        }for(int column = 1;column <= 2;column++){
            printf(" ");
        }for(int column = 1;column <= row;column++){
            printf("#");
        }printf("\n");
    }
  }
