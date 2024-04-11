#include <stdio.h>
#include <cs50.h>

int main(void){
    int x = get_int("X: ");
    int y = get_int("Y: ");

    if (x<y)
    {
        printf("x is less than y");
    }
    else if (x > y)
    {
        printf("x is greater than y");
    }
    else 
    {
        printf("x is equal to y");   
    }
}
