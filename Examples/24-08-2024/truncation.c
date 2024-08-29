#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: "); // scanf 
    int y = get_int("y: "); // scanf
    
    //printf("x/y = %.20f\n",(float) x/y);
    
    printf("x/y = %.20f\n",(double) x/y);

}

