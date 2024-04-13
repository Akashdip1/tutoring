#include <stdio.h>
#include <cs50.h>

int sum(int x,int y);

int main(void){
    int x = get_int("x: ");
    int y = get_int("y: ");
    printf("sum: %i\n", sum(x, y)); // Print output 

}

int sum(int a , int b){ // Combines two intigers
    return a + b;
}


