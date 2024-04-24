#include <stdio.h>
#include <cs50.h>                       //preprocessing

void meow(int n); //prototype 

int main(void){
    int x = get_int("Enter number of times: ");
    meow(x);
}

void meow(int n){                   // x = 10, n = 10;
    for (int i = 0; i < n; i++){
        printf("Meow\n");
    }
}

