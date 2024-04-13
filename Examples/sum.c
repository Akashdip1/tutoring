#include <stdio.h>
#include <cs50.h>

int main(void){
    int num = get_int("Enter number: "); //num = 3
    int sum = 0;
    int i = 1;
    while (i <= num){
        sum += i;
        i++;
    }
    printf("Sum: %i\n", sum);
}
